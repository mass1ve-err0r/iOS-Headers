//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicMediaDetailHeaderViewControllerDelegate-Protocol.h>
#import <FuseUI/MusicMediaDetailSplitViewControllerDelegate-Protocol.h>
#import <FuseUI/SKUINavigationBarDisplayConfiguring-Protocol.h>
#import <FuseUI/SKUIProxyScrollViewDelegate-Protocol.h>

@class MusicHairlineView, MusicMediaDetailTintInformation, NSArray, NSMapTable, NSString, SKUIProxyScrollView, UIScrollView;
@protocol MusicMediaDetailHeaderContentViewController, MusicMediaDetailHeaderViewController, MusicMediaDetailSplitViewController;

@interface MusicMediaDetailViewController : UIViewController <SKUIProxyScrollViewDelegate, MusicMediaDetailHeaderViewControllerDelegate, MusicMediaDetailSplitViewControllerDelegate, SKUINavigationBarDisplayConfiguring>
{
    struct UIEdgeInsets _externalContentInset;
    double _hairlineVisuallyInsetHorizontalLayoutInset;
    MusicHairlineView *_hairlineView;
    _Bool _hasAttemptedSplitDetailViewControllerCreation;
    _Bool _hasReceivedViewDidAppear;
    double _headerHeight;
    double _headerVerticalOffset;
    _Bool _isHandlingScrollViewUpdate;
    _Bool _isSettingLayoutInsets;
    double _maximumHeaderHeight;
    SKUIProxyScrollView *_proxyScrollView;
    UIViewController<MusicMediaDetailSplitViewController> *_splitDetailViewController;
    NSArray *_splitScrollViews;
    NSMapTable *_splitScrollViewToScrollingContext;
    NSMapTable *_viewControllerToClippingView;
    _Bool _allowsVisualInsetting;
    _Bool _showingSplitDetailViewController;
    _Bool _supportsSplitDetailViewController;
    _Bool _hairlineRightInsetIgnoresLayoutInsets;
    _Bool _visuallyInset;
    MusicMediaDetailTintInformation *_detailTintInformation;
    UIViewController<MusicMediaDetailHeaderContentViewController> *_headerContentViewController;
    UIViewController<MusicMediaDetailHeaderViewController> *_headerViewController;
    CDUnknownBlockType _splitDetailViewControllerCreationBlock;
    UIViewController<MusicMediaDetailSplitViewController> *_splitMainViewController;
    double _maximumHeaderHeightAdditions;
    double _headerTransitionProgress;
    double _navigationTitleViewAlphaTransitionProgressDelay;
}

@property(readonly, nonatomic, getter=isVisuallyInset) _Bool visuallyInset; // @synthesize visuallyInset=_visuallyInset;
@property(nonatomic) double navigationTitleViewAlphaTransitionProgressDelay; // @synthesize navigationTitleViewAlphaTransitionProgressDelay=_navigationTitleViewAlphaTransitionProgressDelay;
@property(readonly, nonatomic) double headerTransitionProgress; // @synthesize headerTransitionProgress=_headerTransitionProgress;
@property(nonatomic) double maximumHeaderHeightAdditions; // @synthesize maximumHeaderHeightAdditions=_maximumHeaderHeightAdditions;
@property(nonatomic) _Bool hairlineRightInsetIgnoresLayoutInsets; // @synthesize hairlineRightInsetIgnoresLayoutInsets=_hairlineRightInsetIgnoresLayoutInsets;
@property(readonly, nonatomic) _Bool supportsSplitDetailViewController; // @synthesize supportsSplitDetailViewController=_supportsSplitDetailViewController;
@property(readonly, nonatomic, getter=isShowingSplitDetailViewController) _Bool showingSplitDetailViewController; // @synthesize showingSplitDetailViewController=_showingSplitDetailViewController;
@property(retain, nonatomic) UIViewController<MusicMediaDetailSplitViewController> *splitMainViewController; // @synthesize splitMainViewController=_splitMainViewController;
@property(copy, nonatomic) CDUnknownBlockType splitDetailViewControllerCreationBlock; // @synthesize splitDetailViewControllerCreationBlock=_splitDetailViewControllerCreationBlock;
@property(retain, nonatomic) UIViewController<MusicMediaDetailHeaderViewController> *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) UIViewController<MusicMediaDetailHeaderContentViewController> *headerContentViewController; // @synthesize headerContentViewController=_headerContentViewController;
@property(copy, nonatomic) MusicMediaDetailTintInformation *detailTintInformation; // @synthesize detailTintInformation=_detailTintInformation;
@property(nonatomic) _Bool allowsVisualInsetting; // @synthesize allowsVisualInsetting=_allowsVisualInsetting;
- (void).cxx_destruct;
- (_Bool)_updateSplitScrollViews;
- (void)_updateSplitDetailViewControllerVisibility;
- (void)_updateScrollViewWithOriginatingScrollView:(id)arg1 contentOffset:(struct CGPoint)arg2 shouldAlwaysAdjustContentOffset:(_Bool)arg3;
- (void)_updateScrollViewWithOriginatingScrollView:(id)arg1 shouldAlwaysAdjustContentOffset:(_Bool)arg2;
- (void)_updateScrollViewConsistentContentOffset:(id)arg1;
- (_Bool)_updateMaximumHeaderHeight;
- (void)_setChildLayoutInsets:(struct UIEdgeInsets)arg1;
- (void)_updateHeaderViewFrameWithHeaderHeight:(double)arg1;
- (void)_updateHairlineProperties;
- (id)_splitMainViewController;
- (id)_splitMainContentScrollView;
- (id)_splitDetailViewController;
- (id)_splitDetailContentScrollView;
- (id)_scrollingContextForSplitScrollView:(id)arg1;
- (void)_removeViewControllerViewFromHierarchy:(id)arg1;
- (double)_minimumHeaderHeight;
- (_Bool)_hasVisibleNavigationBar;
- (double)_effectiveHeaderHeightForContentOffset:(struct CGPoint)arg1 externalScrollViewContentInset:(struct UIEdgeInsets)arg2;
- (id)_currentPrimaryScrollView;
- (_Bool)_calculateSupportsSplitDetailViewControllerAllowingMakingSplitDetailViewController:(_Bool)arg1;
- (_Bool)_calculateShowingSplitDetailViewController;
- (id)_calculateHairlineColor;
- (double)_calculateDisappearanceProgressForHeaderHeight:(double)arg1;
- (void)_applyDetailTintInformation;
- (void)_addViewControllerViewToHierarchy:(id)arg1;
- (void)visuallyInsetDidChange;
- (void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
- (void)supportsSplitDetailViewControllerDidChange;
- (void)showingSplitDetailViewControllerDidChange;
- (void)setNeedsAllowsShowingSplitDetailViewControllerUpdate;
- (void)setNeedsAllowsHairlineUpdate;
- (void)detailTintInformationDidChange;
- (_Bool)allowsShowingSplitDetailViewController;
- (_Bool)allowsHairline;
@property(readonly, nonatomic) UIViewController<MusicMediaDetailSplitViewController> *splitDetailViewController;
@property(readonly, nonatomic) struct CGSize maximumHeaderSize;
@property(readonly, nonatomic, getter=isSplitDetailViewControllerLoaded) _Bool splitDetailViewControllerLoaded;
@property(readonly, nonatomic) UIScrollView *currentPrimaryScrollView;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (id)navigationBarTitleTextTintColor;
- (id)navigationBarTintColor;
- (long long)navigationBarTintAdjustmentMode;
- (_Bool)prefersNavigationBarBackgroundViewHidden;
- (void)mediaDetailSplitViewController:(id)arg1 contentScrollViewWillEndDraggingWithVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)mediaDetailSplitViewControllerContentScrollViewDidScroll:(id)arg1;
- (void)mediaDetailSplitViewControllerContentScrollViewContentSizeDidChange:(id)arg1;
- (void)maximumMediaDetailHeaderHeightDidChangeForHeaderViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (id)contentScrollView;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

