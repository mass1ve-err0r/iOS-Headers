/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMAssetsViewController : PXCMMComponentViewController <PXActionPerformerDelegate, PXAssetsSceneDelegate, PXCMMBannerTileControllerDelegate, PXCMMEngineDrivenLayoutDelegate, PXCMMFooterViewModelActionDelegate, PXCMMProgressBannerViewLayoutDelegate, PXChangeObserver, PXContextualNotificationDelegate, PXOneUpPresentationDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXSwipeSelectionManagerDelegate, PXTileSource> {
    NSSet * __hiddenAssetReferences;
    long long  __layoutType;
    bool  _actionInProgress;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    <PXCMMAssetsViewControllerDelegate> * _delegate;
    struct { 
        bool shouldShowAddMoreButton; 
        bool didTapAddMoreButton; 
        bool oneUpPresentation; 
    }  _delegateRespondsTo;
    bool  _didIncrementNumberOfPresentableSendBacks;
    bool  _didIncrementNumberOfPresentedSendBacks;
    NSMutableSet * _inUseTiles;
    bool  _isWaitingForSendBackPresentationConfirmationTimeout;
    struct CGSize { 
        double width; 
        double height; 
    }  _knownReferenceSize;
    bool  _layoutAnimationsGloballyDisabled;
    PXSectionedLayoutEngine * _layoutEngine;
    PXLayoutGenerator * _layoutGenerator;
    PXUITapGestureRecognizer * _layoutTransitionGesture;
    UILongPressGestureRecognizer * _longPressGesture;
    PXCMMBannerTileController * _measuringBannerTile;
    PXCMMSendBackBannerView * _measuringSendBackBannerView;
    PXPhotosGlobalFooterView * _measuringStatusFooterView;
    PXMomentShareStatusPresentation * _momentShareStatusPresentationForFooter;
    PXMomentShareStatusPresentation * _momentShareStatusPresentationForPoster;
    PXAssetReference * _navigatedAssetReference;
    bool  _needsToPerformInitialSelection;
    PXCMMProgressBannerView * _progressBannerView;
    NSArray * _progressBannerViewConstraints;
    bool  _receivingActionButtonWasTapped;
    PXUIAssetsScene * _sceneController;
    PXUIScrollViewController * _scrollViewController;
    PXContextualNotification * _sendBackNotification;
    bool  _sendBackNotificationWasDiscarded;
    bool  _sendBackNotificationWasTapped;
    unsigned long long  _sendBackPresentationConfirmationGeneration;
    PXCMMSendBackSuggestionSource * _sendBackSuggestionSource;
    PXCMMSpec * _spec;
    PXCMMSpecManager * _specManager;
    PXCMMFooterViewModel * _statusFooterViewModel;
    PXSwipeSelectionManager * _swipeSelectionManager;
    PXUITapGestureRecognizer * _tapSelectionGesture;
    PXBasicTileAnimator * _tileAnimator;
    PXTilingController * _tilingController;
    PXUpdater * _updater;
    bool  _userSelectionEnabled;
}

@property (nonatomic, retain) NSSet *_hiddenAssetReferences;
@property (nonatomic) long long _layoutType;
@property (nonatomic, readonly) PXOneUpPresentation *_oneUpPresentation;
@property (getter=isActionInProgress, nonatomic) bool actionInProgress;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMAssetsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool userSelectionEnabled;

- (void).cxx_destruct;
- (unsigned long long)_additionalTileCount;
- (bool)_areAllNotCopiedAssetsSelected;
- (long long)_assetImportStateAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 withDataSource:(id)arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_assetIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_assetIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 kind:(unsigned long long)arg3;
- (id)_assetReferenceAtPoint:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (double)_bannerHeightFromReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_canShowSendBackSuggestion;
- (void)_checkSendBackPresentationStatus;
- (void)_configureBannerTile:(id)arg1;
- (void)_configureLayout:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_createAddButton;
- (id)_createBannerTileController;
- (id)_createNewLayout;
- (id)_createNewLayoutGeneratorWithReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_createOverlayTileView;
- (id)_createPosterTileController;
- (id)_createSectionHeaderController;
- (id)_createSendBackBannerView;
- (id)_createSendBackFooter;
- (id)_createStatusFooter;
- (id)_createStatusTileView;
- (void)_deselectAllAssets;
- (void)_didFindPresentableSendBack;
- (void)_didPresentSendBack;
- (void)_handleLongPress:(id)arg1;
- (void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)arg1;
- (void)_handleTap:(id)arg1;
- (double)_headerHeightFromReferenceSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_hiddenAssetReferences;
- (id)_indexPathsForAssetReferences:(id)arg1 inDataSource:(id)arg2;
- (void)_invalidateLayoutGenerator;
- (void)_invokeSendBackAction;
- (bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (bool)_isAssetAlreadyImportedAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1 withEngineDrivenLayout:(id)arg2;
- (bool)_isSendBackBannerViewContentsAtAllVisible;
- (bool)_isSendBackBannerViewContentsFullyVisible;
- (long long)_layoutType;
- (struct CGSize { double x1; double x2; })_maximumThumbnailSize;
- (id)_oneUpPresentation;
- (void)_performInitialSelectionIfNeeded;
- (void)_performTilingChangeWithoutAnimationTransition:(id /* block */)arg1;
- (void)_preferredContentSizeChanged:(id)arg1;
- (double)_progressBannerViewLayoutHeight;
- (void)_scheduleLayout;
- (void)_selectAllAssets;
- (void)_selectCuratedAssets;
- (void)_selectNonCopiedAssets;
- (void)_selectionModeDidChange;
- (double)_sendBackFooterHeightFromReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setHiddenAssetReferences:(id)arg1;
- (void)_setLayoutType:(long long)arg1;
- (bool)_shouldShowOneUpActions;
- (bool)_shouldShowProgressBanner;
- (double)_statusFooterHeightFromReferenceSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_toggleAssetSelectionAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_transitionLayoutGesture:(id)arg1;
- (void)_updateAssetsScene;
- (void)_updateGestures;
- (void)_updateLayoutEngine;
- (void)_updatePlaceholder;
- (void)_updateProgressBannerViewConstraints;
- (void)_updateProgressBannerViewVisibility;
- (void)_updateSelectionEnabled;
- (void)_updateSelectionIfNeeded;
- (void)_updateSendBackNotification;
- (void)_updateStyle;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)addButtonTapped:(id)arg1;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (void)contextualNotificationDidAppear:(id)arg1;
- (void)contextualNotificationDidDisappear:(id)arg1;
- (void)contextualNotificationWasDiscarded:(id)arg1;
- (void)contextualNotificationWasTapped:(id)arg1;
- (id)delegate;
- (void)didPerformDeletionActionForFooterViewModel:(id)arg1;
- (void)didTapActionButtonInBannerTileController:(id)arg1;
- (double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (long long)engineDrivenLayout:(id)arg1 assetStatusAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 forAspectRatio:(double)arg3;
- (bool)engineDrivenLayout:(id)arg1 shouldShowDimmingOverlayAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)engineDrivenLayout:(id)arg1 shouldShowStatusBadgeAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)isActionInProgress;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationActionManager:(id)arg1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationImportStatusManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (void)presentSendBackNotification;
- (void)progressBannerViewLayoutHeightDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setActionInProgress:(bool)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserSelectionEnabled:(bool)arg1;
- (void)set_hiddenAssetReferences:(id)arg1;
- (void)set_layoutType:(long long)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1;
- (bool)swipeSelectionManagerIsInMultiSelectMode:(id)arg1;
- (bool)userSelectionEnabled;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end