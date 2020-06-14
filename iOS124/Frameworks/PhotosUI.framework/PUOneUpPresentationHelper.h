//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPhotosPreviewPresentationControllerDelegate-Protocol.h>
#import <PhotosUI/PUPinchedTileTrackerDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewControllerTransitionEndPoint-Protocol.h>
#import <PhotosUI/PUTilingViewTileSource-Protocol.h>
#import <PhotosUI/PUTilingViewTileTransitionDelegate-Protocol.h>
#import <PhotosUI/PUTilingViewTileUseDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSSet, NSString, PUBrowsingSession, PUCameraPreviewTransitionDelegate, PUChangeDirectionValueFilter, PUOneUpViewController, PUPinchedTileTracker, PUTilingView, PXPhotosDataSource, UITapGestureRecognizer, UIViewController;
@protocol PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate;

@interface PUOneUpPresentationHelper : NSObject <PUPhotosPreviewPresentationControllerDelegate, UIGestureRecognizerDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate, PUPinchedTileTrackerDelegate, PUTilingViewControllerTransitionEndPoint>
{
    struct {
        _Bool respondsToTransitionTypeWithProposedTransitionType;
        _Bool respondsToWillPresentOneUpViewController;
        _Bool respondsToDidDismissOneUpViewController;
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToViewHostingTilingView;
        _Bool respondsToScrollView;
        _Bool respondsToPreferredBarStyle;
        _Bool respondsToShouldLeaveContentOnSecondScreen;
        _Bool respondsToDisableFinalFadeoutAnimation;
        _Bool respondsToPreviewScrubberDidBecomeAvailable;
        _Bool respondsToShouldAutoPlay;
        _Bool respondsToPreventRevealInMomentAction;
        _Bool respondsToPreferredPresentationOrientation;
        _Bool respondsToEnableFreezeLayoutOnOrientationChange;
        _Bool respondsToAdditionalOptions;
    } _delegateFlags;
    struct {
        _Bool respondsToCurrentImageForAssetReference;
        _Bool respondsToShouldHideAssetReferences;
        _Bool respondsToScrollAssetReferenceToVisible;
        _Bool respondsToShouldDisableScroll;
    } _assetDisplayDelegateFlags;
    struct {
        _Bool presentationInfo;
    } _needsUpdateFlags;
    _Bool _cachesScrubberView;
    _Bool __isEndingPresentation;
    _Bool __shouldPauseLibraryChanges;
    _Bool __needsUpdateAssetReferencesDisplayedInTilingView;
    _Bool __isPerformingNonAnimatedPush;
    PUBrowsingSession *_browsingSession;
    UIViewController *_presentingViewController;
    long long _transitionType;
    PXPhotosDataSource *_photosDataSource;
    id <PUOneUpPresentationHelperDelegate> _delegate;
    id <PUOneUpPresentationHelperAssetDisplayDelegate> _assetDisplayDelegate;
    CDUnknownBlockType _unlockDeviceStatus;
    CDUnknownBlockType _unlockDeviceHandler;
    long long __state;
    long long __presentationEndTimeoutIdentifier;
    id __libraryChangePauseToken;
    CDUnknownBlockType __browsingSessionCreationBlock;
    PUTilingView *__tilingView;
    PUTilingView *__disappearingTilingView;
    PUTilingView *__transitioningTilingView;
    NSSet *__assetReferencesDisplayedInTilingView;
    PUOneUpViewController *__oneUpViewController;
    UITapGestureRecognizer *__tapGestureRecognizer;
    PUPinchedTileTracker *__pinchedTileTracker;
    PUChangeDirectionValueFilter *__panDirectionValueFilter;
    PUCameraPreviewTransitionDelegate *__cameraPreviewTransitionDelegate;
    long long __presentationOrigin;
}

@property(nonatomic) long long _presentationOrigin; // @synthesize _presentationOrigin=__presentationOrigin;
@property(nonatomic, setter=_setIsPerformingNonAnimatedPush:) _Bool _isPerformingNonAnimatedPush; // @synthesize _isPerformingNonAnimatedPush=__isPerformingNonAnimatedPush;
@property(retain, nonatomic, setter=_setCameraPreviewTransitionDelegate:) PUCameraPreviewTransitionDelegate *_cameraPreviewTransitionDelegate; // @synthesize _cameraPreviewTransitionDelegate=__cameraPreviewTransitionDelegate;
@property(retain, nonatomic, setter=_setPanDirectionValueFilter:) PUChangeDirectionValueFilter *_panDirectionValueFilter; // @synthesize _panDirectionValueFilter=__panDirectionValueFilter;
@property(retain, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker; // @synthesize _pinchedTileTracker=__pinchedTileTracker;
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(retain, nonatomic, setter=_setOneUpViewController:) PUOneUpViewController *_oneUpViewController; // @synthesize _oneUpViewController=__oneUpViewController;
@property(retain, nonatomic, setter=_setAssetReferencesDisplayedInTilingView:) NSSet *_assetReferencesDisplayedInTilingView; // @synthesize _assetReferencesDisplayedInTilingView=__assetReferencesDisplayedInTilingView;
@property(nonatomic, setter=_setNeedsUpdateAssetReferencesDisplayedInTilingView:) _Bool _needsUpdateAssetReferencesDisplayedInTilingView; // @synthesize _needsUpdateAssetReferencesDisplayedInTilingView=__needsUpdateAssetReferencesDisplayedInTilingView;
@property(retain, nonatomic, setter=_setTransitioningTilingView:) PUTilingView *_transitioningTilingView; // @synthesize _transitioningTilingView=__transitioningTilingView;
@property(nonatomic, setter=_setDisappearingTilingView:) __weak PUTilingView *_disappearingTilingView; // @synthesize _disappearingTilingView=__disappearingTilingView;
@property(retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property(readonly, copy, nonatomic) CDUnknownBlockType _browsingSessionCreationBlock; // @synthesize _browsingSessionCreationBlock=__browsingSessionCreationBlock;
@property(retain, nonatomic, setter=_setLibraryChangePauseToken:) id _libraryChangePauseToken; // @synthesize _libraryChangePauseToken=__libraryChangePauseToken;
@property(nonatomic, setter=_setShouldPauseLibraryChanges:) _Bool _shouldPauseLibraryChanges; // @synthesize _shouldPauseLibraryChanges=__shouldPauseLibraryChanges;
@property(nonatomic, setter=_setPresentationEndTimeoutIdentifier:) long long _presentationEndTimeoutIdentifier; // @synthesize _presentationEndTimeoutIdentifier=__presentationEndTimeoutIdentifier;
@property(nonatomic, setter=_setEndingPresentation:) _Bool _isEndingPresentation; // @synthesize _isEndingPresentation=__isEndingPresentation;
@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(nonatomic) _Bool cachesScrubberView; // @synthesize cachesScrubberView=_cachesScrubberView;
@property(copy, nonatomic) CDUnknownBlockType unlockDeviceHandler; // @synthesize unlockDeviceHandler=_unlockDeviceHandler;
@property(copy, nonatomic) CDUnknownBlockType unlockDeviceStatus; // @synthesize unlockDeviceStatus=_unlockDeviceStatus;
@property(nonatomic) __weak id <PUOneUpPresentationHelperAssetDisplayDelegate> assetDisplayDelegate; // @synthesize assetDisplayDelegate=_assetDisplayDelegate;
@property(nonatomic) __weak id <PUOneUpPresentationHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(retain, nonatomic, setter=_setBrowsingSession:) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
- (void).cxx_destruct;
- (void)tilingViewDidEndAnimatingTileControllers:(id)arg1;
- (void)tilingViewDidUpdateTileControllers:(id)arg1;
- (void)tilingView:(id)arg1 didStopUsingTileController:(id)arg2;
- (void)tilingView:(id)arg1 willStartUsingTileController:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForUpdateWithItems:(id)arg2;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (void)tilingViewControllerTransitionWasAborted:(id)arg1;
- (long long)tilingViewControllerTransitionPreferredBarStyle:(id)arg1;
- (_Bool)tilingViewControllerTransitionUsesTransientTilingView:(id)arg1;
- (void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(_Bool)arg4 animationSetupCompletionHandler:(CDUnknownBlockType)arg5;
- (void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
- (id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
- (id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForTileWithLayoutInfo:(id)arg2;
- (double)pinchedTiledTracker:(id)arg1 initialAspectRatioForTileWithLayoutInfo:(id)arg2;
- (void)interactiveTileTracker:(id)arg1 didStopTrackingTileController:(id)arg2;
- (void)interactiveTileTracker:(id)arg1 willStartTrackingTileController:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)photosPreviewPresentationController:(id)arg1 willPresentPreviewViewController:(id)arg2;
- (_Bool)_shouldAutoplayOnNavigation;
- (void)navigateToAssetAtIndexPath:(id)arg1;
- (id)cameraPreviewTransitionDelegateWithSourceRect:(struct CGRect)arg1 sourceImage:(id)arg2;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (void)_updatePreviewingScrubber;
- (_Bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)_scrollViewForPreviewing;
- (void)commitPreviewViewController:(id)arg1;
- (void)cancelCommitTransitionForPreviewViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)beginUsingBlackTheme;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1 allowingActions:(_Bool)arg2;
- (id)_createOneUpViewControllerWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2;
- (void)_didFinishTransitioningToOneUp;
- (void)_disappearingTilingView:(id)arg1 animationCompleted:(_Bool)arg2;
- (void)_cleanUpAfterTilingViewTransitionAnimated:(_Bool)arg1;
- (void)_updateAssetReferencesDisplayedInTilingView;
- (void)_invalidateAssetReferencesDisplayedInTilingView;
- (void)_handleTap:(id)arg1;
- (void)_updateTapGestureRecognizer;
- (id)_newCollapsedLayout;
- (long long)_currentNavigationControllerOperation;
- (id)_currentTilingViewControllerTransition;
- (void)_updateLayout:(id)arg1;
- (void)_updateLayout;
- (void)_ensureRegistrationWithPresentingViewController;
- (id)_transitionHostingView;
- (void)_presentationEndDidTimeOut:(long long)arg1;
- (void)_handleTileControllerAnimationEnd;
- (_Bool)_handleInteractivePresentationWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)handlePresentingPanGestureRecognizer:(id)arg1;
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (void)presentingViewControllerScrollViewDidScroll:(id)arg1;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;
- (void)_cleanupOneUpViewControllerForDismissalIfNeeded;
- (_Bool)dismissOneUpViewControllerForced:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_prepareDismissalForced:(_Bool)arg1;
- (_Bool)canDismissOneUpViewController;
- (void)presentOneUpViewControllerFromAssetAtIndexPath:(id)arg1 animated:(_Bool)arg2 interactiveMode:(long long)arg3;
- (void)presentOneUpViewControllerAnimated:(_Bool)arg1 interactiveMode:(long long)arg2;
- (struct CGAffineTransform)_tilingViewTransitionTransform;
- (_Bool)canPresentOneUpViewControllerAnimated:(_Bool)arg1;
- (void)_configureNavigationController:(id)arg1;
- (void)_presentOneUpViewController:(id)arg1 animated:(_Bool)arg2 interactiveMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updatePresentationInfoIfNeeded;
- (void)_invalidatePresentationInfo;
@property(readonly, nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) _Bool isOneUpPresented;
- (id)browsingSessionCreateIfNeeded:(_Bool)arg1;
- (void)dealloc;
- (id)initWithPhotosDataSource:(id)arg1;
- (id)initWithBrowsingSessionCreationBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

