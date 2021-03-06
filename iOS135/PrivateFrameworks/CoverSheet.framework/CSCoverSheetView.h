/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSCoverSheetView : UIView <CSCoverSheetViewTransitionSource, CSScrollViewDelegate, CSScrollableView> {
    UIView * _authIndicator;
    SBUIBackgroundView * _backgroundView;
    SBUIBackgroundView * _bedtimeGreetingViewBackgroundView;
    UIView * _bottomPage;
    UIView * _cameraCoveredView;
    UIVisualEffectView * _dateEffectView;
    UIView * _dateTimeClippingView;
    SBFLockScreenDateView * _dateView;
    bool  _dateViewIsVibrant;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dateViewOffset;
    long long  _dateViewPageAlignment;
    <CSCoverSheetViewDelegate> * _delegate;
    UIView * _fakeStatusBar;
    unsigned long long  _fakeStatusBarLevel;
    CSFixedFooterView * _fixedFooterView;
    bool  _forceDateViewCentered;
    struct CGPoint { 
        double x; 
        double y; 
    }  _foregroundViewPositionOffset;
    UIView * _higherSlideableContentView;
    bool  _ignoresOverscrollOnMainPage;
    unsigned long long  _initialPageIndex;
    CSLayoutStrategy * _layoutStrategy;
    _UILegibilitySettings * _legibilitySettings;
    bool  _legibilitySettingsOverrideVibrancy;
    CSLocketForcePressGestureRecognizer * _locketGestureRecognizer;
    UIView * _mainPageView;
    UIView * _modalPresentationView;
    UIView * _proudLockContainerView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _proudLockIconViewOffset;
    CSQuickActionsView * _quickActionsView;
    UITapGestureRecognizer * _quickNoteGestureRecognizer;
    UIColor * _reduceTransparencyBackingColor;
    UIView * _referenceViewForBelowPresentationContext;
    CSRegionsDebugView * _regionsDebugView;
    UIView * _scalableContentView;
    CSScrollModifier * _scrollModifier;
    SBFPagedScrollView * _scrollView;
    double  _scrollViewStartingXOffset;
    bool  _shouldModifyPageScrolling;
    UIView * _slideableContentView;
    long long  _statusBarBackgroundPageAlignment;
    UIVisualEffectView * _statusBarBackgroundView;
    bool  _statusBarLegibilityEnabled;
    SBFStatusBarLegibilityView * _statusBarLegibilityView;
    unsigned long long  _targetPageIndexForDraggingEnded;
    CSTeachableMomentsContainerView * _teachableMomentsContainerView;
    UIView * _tintingView;
    struct { 
        double value; 
        struct { 
            struct { 
                double value; 
                bool inclusive; 
            } start; 
            struct { 
                double value; 
                bool inclusive; 
            } end; 
        } interval; 
        long long mode; 
    }  _transitionContext;
    bool  _viewControllerAppearingOrAppeared;
    UIView * _wakeEffectView;
    UIView<CSWallpaperView> * _wallpaperEffectView;
    UIGestureRecognizer * _wallpaperGestureRecognizer;
}

@property (nonatomic, retain) SBUIBackgroundView *backgroundView;
@property (nonatomic, retain) SBUIBackgroundView *bedtimeGreetingViewBackgroundView;
@property (nonatomic, retain) UIView *bottomPage;
@property (nonatomic, retain) UIView *cameraCoveredView;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic, retain) SBFLockScreenDateView *dateView;
@property (nonatomic) bool dateViewIsVibrant;
@property (nonatomic) struct CGPoint { double x1; double x2; } dateViewOffset;
@property (nonatomic) long long dateViewPageAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSCoverSheetViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *fakeStatusBar;
@property (nonatomic) unsigned long long fakeStatusBarLevel;
@property (nonatomic, retain) CSFixedFooterView *fixedFooterView;
@property (nonatomic) bool forceDateViewCentered;
@property (nonatomic) struct CGPoint { double x1; double x2; } foregroundViewPositionOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresOverscrollOnMainPage;
@property (nonatomic) CSLayoutStrategy *layoutStrategy;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) bool legibilitySettingsOverrideVibrancy;
@property (nonatomic, retain) CSLocketForcePressGestureRecognizer *locketGestureRecognizer;
@property (nonatomic, retain) UIView *mainPageView;
@property (nonatomic, retain) UIView *modalPresentationView;
@property (nonatomic, retain) NSArray *pageViews;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, retain) UIView *proudLockContainerView;
@property (nonatomic) struct CGPoint { double x1; double x2; } proudLockIconViewOffset;
@property (nonatomic, retain) CSQuickActionsView *quickActionsView;
@property (nonatomic, retain) UITapGestureRecognizer *quickNoteGestureRecognizer;
@property (nonatomic, retain) UIColor *reduceTransparencyBackingColor;
@property (nonatomic) UIView *referenceViewForBelowPresentationContext;
@property (nonatomic, retain) CSRegionsDebugView *regionsDebugView;
@property (nonatomic, retain) UIView *scalableContentView;
@property (nonatomic, retain) SBFPagedScrollView *scrollView;
@property (nonatomic, readonly) UIView *slideableContentView;
@property (nonatomic) long long statusBarBackgroundPageAlignment;
@property (nonatomic, retain) UIVisualEffectView *statusBarBackgroundView;
@property (nonatomic) bool statusBarLegibilityEnabled;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetPageIndexForDraggingEnded;
@property (nonatomic, retain) CSTeachableMomentsContainerView *teachableMomentsContainerView;
@property (nonatomic, retain) UIView *tintingView;
@property (nonatomic, readonly) struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; } transitionContext;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;
@property (nonatomic, retain) UIView *wakeEffectView;
@property (nonatomic, retain) UIView<CSWallpaperView> *wallpaperEffectView;
@property (nonatomic, retain) UIGestureRecognizer *wallpaperGestureRecognizer;

- (void).cxx_destruct;
- (void)_addAuthIndicator;
- (void)_addBackgroundView;
- (void)_addDateTimeContainer;
- (void)_addHigherSlideableContentView;
- (void)_addScalableContentView;
- (void)_addScrollView;
- (void)_addSlideableContentView;
- (void)_addStatusBarLegibilityView;
- (void)_addTintingView;
- (struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })_completedTransitionContextForPreviousTransitionContext:(struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })arg1 newTransitionContext:(struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })arg2;
- (struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })_currentTransitionContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dateViewFrameForPageAlignment:(long long)arg1 pageRelativeScrollOffset:(double)arg2 outAlignmentPercent:(double*)arg3;
- (unsigned long long)_indexOfMainPage;
- (void)_layoutAuthIndicator;
- (void)_layoutBottomPage;
- (void)_layoutDateTimeViewClippingView;
- (void)_layoutDateView;
- (void)_layoutFakeStatusBar;
- (void)_layoutFullScreenViews;
- (void)_layoutHigherSlideableContentView;
- (void)_layoutProudLockView;
- (void)_layoutQuickActionsView;
- (void)_layoutStatusBarBackgroundView;
- (void)_layoutStatusBarLegibilityView;
- (void)_layoutTeachableMomentsContainerView;
- (void)_layoutTintingView;
- (void)_layoutWallpaperEffectView;
- (void)_orderSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_overlayClippingFrame;
- (void)_removeScalableContentView;
- (struct CGPoint { double x1; double x2; })_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint { double x1; double x2; })arg2 translation:(struct CGPoint { double x1; double x2; })arg3 startPoint:(struct CGPoint { double x1; double x2; })arg4 locationInView:(struct CGPoint { double x1; double x2; })arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7;
- (void)_setDateView:(id)arg1 forTesting:(bool)arg2;
- (void)_setupLocketGestureOnScrollView:(bool)arg1;
- (void)_setupQuickNoteGestureOnScrollView:(bool)arg1;
- (void)_setupWallpaperGestureOnScrollView:(bool)arg1;
- (void)_updateLegibility;
- (void)addScalableContentView;
- (long long)backgroundStyle;
- (id)backgroundView;
- (id)bedtimeGreetingViewBackgroundView;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
- (id)bottomPage;
- (id)cameraCoveredView;
- (void)cancelTransition;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (id)coverSheetIdentifier;
- (bool)coverSheetScrollView:(id)arg1 shouldSetContentOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (id)dateView;
- (bool)dateViewIsVibrant;
- (struct CGPoint { double x1; double x2; })dateViewOffset;
- (long long)dateViewPageAlignment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dateViewPresentationExtentForPageRelativeScrollOffset:(double)arg1;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (id)fakeStatusBar;
- (unsigned long long)fakeStatusBarLevel;
- (id)fixedFooterView;
- (bool)forceDateViewCentered;
- (struct CGPoint { double x1; double x2; })foregroundViewPositionOffset;
- (bool)ignoresOverscrollOnMainPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTransitioning;
- (bool)isTransitioningBackgroundStyle;
- (id)layoutStrategy;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (bool)legibilitySettingsOverrideVibrancy;
- (id)locketGestureRecognizer;
- (id)mainPageView;
- (id)modalPresentationView;
- (id)pageViews;
- (long long)participantState;
- (id)proudLockContainerView;
- (struct CGPoint { double x1; double x2; })proudLockIconViewOffset;
- (id)quickActionsView;
- (id)quickNoteGestureRecognizer;
- (id)reduceTransparencyBackingColor;
- (id)referenceViewForBelowPresentationContext;
- (id)regionsDebugView;
- (void)removeScalableContentView;
- (bool)resetScrollViewToMainPageAnimated:(bool)arg1 withAnimationSettings:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)resetScrollViewToMainPageAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)scalableContentView;
- (bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)scrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1 withContext:(struct { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; })arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginScrolling:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBedtimeGreetingViewBackgroundView:(id)arg1;
- (void)setBottomPage:(id)arg1;
- (void)setCameraCoveredView:(id)arg1;
- (void)setDateView:(id)arg1;
- (void)setDateViewIsVibrant:(bool)arg1;
- (void)setDateViewOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDateViewPageAlignment:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFakeStatusBar:(id)arg1;
- (void)setFakeStatusBarLevel:(unsigned long long)arg1;
- (void)setFixedFooterView:(id)arg1;
- (void)setForceDateViewCentered:(bool)arg1;
- (void)setForegroundViewPositionOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIgnoresOverscrollOnMainPage:(bool)arg1;
- (void)setLayoutStrategy:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setLegibilitySettingsOverrideVibrancy:(bool)arg1;
- (void)setLocketGestureRecognizer:(id)arg1;
- (void)setMainPageView:(id)arg1;
- (void)setModalPresentationView:(id)arg1;
- (void)setPageViews:(id)arg1;
- (void)setProudLockContainerView:(id)arg1;
- (void)setProudLockIconViewOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setQuickActionsView:(id)arg1;
- (void)setQuickNoteGestureRecognizer:(id)arg1;
- (void)setReduceTransparencyBackingColor:(id)arg1;
- (void)setReferenceViewForBelowPresentationContext:(id)arg1;
- (void)setRegionsDebugView:(id)arg1;
- (void)setScalableContentView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStatusBarBackgroundPageAlignment:(long long)arg1;
- (void)setStatusBarBackgroundView:(id)arg1;
- (void)setStatusBarLegibilityEnabled:(bool)arg1;
- (void)setTargetPageIndexForDraggingEnded:(unsigned long long)arg1;
- (void)setTeachableMomentsContainerView:(id)arg1;
- (void)setTintingView:(id)arg1;
- (void)setWakeEffectView:(id)arg1;
- (void)setWallpaperEffectView:(id)arg1;
- (void)setWallpaperGestureRecognizer:(id)arg1;
- (id)slideableContentView;
- (long long)statusBarBackgroundPageAlignment;
- (id)statusBarBackgroundView;
- (bool)statusBarLegibilityEnabled;
- (unsigned long long)targetPageIndexForDraggingEnded;
- (id)teachableMomentsContainerView;
- (id)tintingView;
- (struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })transitionContext;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
- (void)updateScalableContentTransformWithScale:(double)arg1;
- (void)updateStatusBarLegibilityForForceLegibilityGradientHidden:(bool)arg1;
- (void)updateUIForAuthenticated:(bool)arg1;
- (void)viewControllerDidDisappear;
- (void)viewControllerWillAppear;
- (id)wakeEffectView;
- (id)wallpaperEffectView;
- (id)wallpaperGestureRecognizer;

@end
