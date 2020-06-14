//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicContainerScrollViewDelegate-Protocol.h>
#import <FuseUI/MusicMediaDetailSplitViewController-Protocol.h>
#import <FuseUI/SKUIScrollingSegmentedControllerDelegate-Protocol.h>

@class MPMediaItemCollection, MusicClientContext, MusicContainerScrollView, MusicMediaDetailTintInformation, MusicProfileAlbumsViewConfiguration, MusicProfileAlbumsViewController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SKUIScrollingSegmentedController, UIScrollView, UIView;
@protocol MusicMediaProfileSplitMainViewControllerDelegate;

@interface MusicMediaProfileSplitMainViewController : UIViewController <MusicContainerScrollViewDelegate, SKUIScrollingSegmentedControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController>
{
    MusicProfileAlbumsViewConfiguration *_albumsViewConfiguration;
    MusicProfileAlbumsViewController *_albumsViewController;
    NSArray *_allowedSegments;
    MPMediaItemCollection *_artistEntity;
    _Bool _canShowConnectSegment;
    _Bool _canShowSubscriptionSegments;
    MusicContainerScrollView *_containerScrollView;
    struct CGPoint _containerScrollViewNormalizedContentOffset;
    _Bool _didAutomaticallySelectMyMusicSegment;
    UIScrollView *_focusedContentScrollView;
    _Bool _hasInitializedContainerScrollViewNormalizedContentOffset;
    NSString *_initiallySelectedSegmentIdentifier;
    _Bool _isAdjustingContentSize;
    _Bool _isHidingVerticalScrollIndicator;
    NSMutableDictionary *_loadedViewControllersToInsert;
    struct UIEdgeInsets _minimumHeightContentInsetAdditions;
    unsigned long long _profileType;
    SKUIScrollingSegmentedController *_scrollingSegmentedController;
    UIView *_segmentedControlHairlineView;
    struct UIEdgeInsets _segmentedControlScrollViewEdgeInsetAdditions;
    NSMutableArray *_segmentIdentifiers;
    NSMutableSet *_segmentIdentifiersForLoadedViews;
    _Bool _shouldAutomaticallySelectMyMusicSegment;
    _Bool _segmentedControlVisible;
    _Bool _shouldShowStoreSegments;
    _Bool _visuallyInset;
    MusicClientContext *_clientContext;
    double _headerTransitionProgress;
    id <MusicMediaProfileSplitMainViewControllerDelegate> _mediaSplitViewControllerDelegate;
    NSDictionary *_availableContentFlags;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    double _preferredMaximumContentWidth;
}

@property(nonatomic, getter=isVisuallyInset) _Bool visuallyInset; // @synthesize visuallyInset=_visuallyInset;
@property(nonatomic) _Bool shouldShowStoreSegments; // @synthesize shouldShowStoreSegments=_shouldShowStoreSegments;
@property(readonly, nonatomic, getter=isSegmentedControlVisible) _Bool segmentedControlVisible; // @synthesize segmentedControlVisible=_segmentedControlVisible;
@property(nonatomic) double preferredMaximumContentWidth; // @synthesize preferredMaximumContentWidth=_preferredMaximumContentWidth;
@property(copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property(copy, nonatomic) NSDictionary *availableContentFlags; // @synthesize availableContentFlags=_availableContentFlags;
@property(nonatomic) _Bool shouldAutomaticallySelectMyMusicSegment; // @synthesize shouldAutomaticallySelectMyMusicSegment=_shouldAutomaticallySelectMyMusicSegment;
@property(nonatomic) __weak id <MusicMediaProfileSplitMainViewControllerDelegate> mediaSplitViewControllerDelegate; // @synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate;
@property(nonatomic) double headerTransitionProgress; // @synthesize headerTransitionProgress=_headerTransitionProgress;
@property(retain, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_updateSegmentedControlScrollViewVisibility;
- (void)_updateVisibleSegments;
- (void)_updateHairlineProperties;
- (void)_updateSegmentedControlLayoutForSuperviewChange:(_Bool)arg1;
- (void)_updateFocusedContentScrollViewIfNeeded;
- (void)_updateContainerScrollViewContentInformationFromScroll:(_Bool)arg1;
- (void)_unregisterForNotificationsForContentScrollView:(id)arg1;
- (_Bool)_shouldShowSegmentedControl;
- (struct UIEdgeInsets)_currentSegmentedControlContentEdgeInsets;
- (id)_scrollingSegmentedController;
- (void)_registerForNotificationsForContentScrollView:(id)arg1;
- (void)_containerScrollViewDidFinishScrolling;
- (void)_containerScrollViewDidBeginScrolling;
- (void)_applyTintInformation;
- (void)_applyHairlineTintInformation;
- (struct CGPoint)_adjustContentOffsetForBounds:(struct CGRect)arg1 inScrollView:(id)arg2 withContentInset:(struct UIEdgeInsets)arg3;
- (void)_handleCanShowSubscriptionContentDidChangeNotification:(id)arg1;
- (void)_handleCanShowConnectDidChangeNotification:(id)arg1;
- (void)setViewController:(id)arg1 forSegmentIdentifier:(id)arg2;
- (id)viewControllerForSegmentIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *selectedSegmentIdentifier;
@property(copy, nonatomic) NSArray *allowedSegments;
@property(readonly, nonatomic) SKUIScrollingSegmentedController *scrollingSegmentedController;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollingSegmentedControllerDidEndDecelerating:(id)arg1;
- (void)scrollingSegmentedControllerDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollingSegmentedControllerWillBeginDragging:(id)arg1;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 didFocusViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 contentScrollViewDidChangeForViewControllerAtIndex:(unsigned long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)containerScrollViewContentSizeDidChange:(id)arg1;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (id)contentScrollView;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)initWithProfileType:(unsigned long long)arg1 artistEntity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

