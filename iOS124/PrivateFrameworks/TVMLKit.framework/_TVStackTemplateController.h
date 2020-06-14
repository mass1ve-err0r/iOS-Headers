//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVStackCommonTemplateController.h>

#import <TVMLKit/TVShowcasing-Protocol.h>
#import <TVMLKit/_TVStackViewDelegateFlowLayout-Protocol.h>

@class IKChangeSet, NSArray, NSIndexPath, NSString, TVObservableEventController, UIView, UIViewController, _TVNeedsMoreContentEvaluator;

@interface _TVStackTemplateController : _TVStackCommonTemplateController <_TVStackViewDelegateFlowLayout, TVShowcasing>
{
    NSArray *_unfilteredViewControllers;
    IKChangeSet *_filteredChangeSet;
    NSArray *_viewControllers;
    double _lastLayoutWidth;
    NSArray *_stackSections;
    NSArray *_stackRows;
    double _contentHeight;
    double _showcaseFactor;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
    _Bool _adjustForMenuBar;
    double _showcaseInset;
    TVObservableEventController *_observableEventController;
}

@property(readonly, nonatomic) TVObservableEventController *observableEventController; // @synthesize observableEventController=_observableEventController;
@property(nonatomic) double showcaseInset; // @synthesize showcaseInset=_showcaseInset;
- (void).cxx_destruct;
- (struct CGSize)_maxContentSize;
- (void)_updateBackgroundTintViewEffects;
- (void)_updateBackgroundTintView;
- (void)_configureBackgroundTintView;
- (_Bool)_requiresShowcasing;
- (double)_offsetToScrollStop:(id)arg1;
- (void)_updateFirstItemRowIndexes;
- (void)_buildStackSections;
- (double)_maxViewWidth;
- (_Bool)_didExtendContentForPeekMetrics:(CDStruct_6408a1ed *)arg1 above:(_Bool)arg2 initial:(_Bool)arg3;
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (id)_viewControllerWithElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;
- (id)_updateWithCollectionListElement:(id)arg1 commits:(CDUnknownBlockType *)arg2 autoHighlightIndexPath:(id *)arg3;
- (void)_scrollToTopAnimated:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)contentScrollView;
- (void)collectionView:(id)arg1 showcaseFactorDidChangeForLayout:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2;
- (id)scrollStopForShowcaseTransition;
- (void)didUpdateSectionInfo;
- (_Bool)shouldAdjustForTabBarSafeAreaInsets;
- (void)showcaseFactorDidChange;
- (void)updateBackdropMaskFactor;
- (void)updateBackgroundAndBackdrop;
- (struct UIEdgeInsets)collectionListMargin;
- (long long)numberOfCollections;
- (void)updateCollectionViewControllersAndForceReload:(_Bool)arg1;
@property(readonly, nonatomic) double showcaseFactor;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)viewControllers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

