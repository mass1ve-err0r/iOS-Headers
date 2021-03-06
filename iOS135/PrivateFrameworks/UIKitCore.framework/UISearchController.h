/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchController : UIViewController <NSCoding, TSPresentable, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, _UIScrollViewScrollObserver_Internal> {
    UINavigationItem * __navigationItemCurrentlyDisplayingSearchController;
    long long  __previousSearchBarPosition;
    unsigned long long  __requestedInteractionModel;
    double  __resultsContentScrollViewPresentationOffset;
    bool  __shouldRespectPreferredContentSize;
    bool  __showResultsForEmptySearch;
    UIView * __systemInputMarginView;
    bool  __tabBarHidden;
    <UIViewControllerAnimatedTransitioning> * _animator;
    UITapGestureRecognizer * _backButtonDismissGestureRecognizer;
    int  _barPresentationStyle;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
        unsigned int searchBarWasFirstResponder : 1; 
        unsigned int transitioningOut : 1; 
        unsigned int delegateWantsInsertSearchFieldTextSuggestion : 1; 
        unsigned int automaticallyShowsCancelButton : 1; 
        unsigned int automaticallyShowsScopeBar : 1; 
        unsigned int automaticallyShowsSearchResultsController : 1; 
        unsigned int explicitlyShowsSearchResultsController : 1; 
    }  _controllerFlags;
    <UISearchControllerDelegate> * _delegate;
    _UISearchControllerDidScrollDelegate * _didScrollDelegate;
    UITapGestureRecognizer * _doneButtonGestureRecognizer;
    bool  _hidesNavigationBarDuringPresentation;
    long long  _lastKnownInterfaceOrientation;
    _UINavigationControllerManagedSearchPalette * _managedPalette;
    bool  _obscuresBackgroundDuringPresentation;
    UIView * _resultsControllerViewContainer;
    UISearchBar * _searchBar;
    UIViewController * _searchResultsController;
    <UISearchResultsUpdating> * _searchResultsUpdater;
    bool  _shouldFocusResults;
    UISystemInputViewController * _systemInputViewController;
    id  _windowWillAnimateToken;
}

@property (setter=_setAutomaticallyShowsCancelButton:, nonatomic) bool _automaticallyShowsCancelButton;
@property (setter=_setAutomaticallyShowsScopeBar:, nonatomic) bool _automaticallyShowsScopeBar;
@property (getter=_automaticallyShowsSearchResultsController, setter=_setAutomaticallyShowsSearchResultsController:, nonatomic) bool _automaticallyShowsSearchResultsController;
@property (nonatomic, readonly) int _barPresentationStyle;
@property (readonly) bool _delegateWantsInsertSearchFieldTextSuggestion;
@property (nonatomic, readonly) bool _isShowingSearchResultsControllerWhileActive;
@property (nonatomic, readonly, retain) _UINavigationControllerManagedSearchPalette *_managedPalette;
@property (nonatomic) UINavigationItem *_navigationItemCurrentlyDisplayingSearchController;
@property (nonatomic) long long _previousSearchBarPosition;
@property (setter=_setRequestedInteractionModel:, nonatomic) unsigned long long _requestedInteractionModel;
@property (nonatomic) double _resultsContentScrollViewPresentationOffset;
@property (nonatomic, retain) UIView *_resultsControllerViewContainer;
@property (nonatomic, readonly) bool _searchbarWasTableHeaderView;
@property (setter=_setShouldRespectPreferredContentSize:, nonatomic) bool _shouldRespectPreferredContentSize;
@property (setter=_setShowResultsForEmptySearch:, nonatomic) bool _showResultsForEmptySearch;
@property (getter=_showsSearchResultsController, setter=_setShowsSearchResultsController:, nonatomic) bool _showsSearchResultsController;
@property (nonatomic, retain) UIView *_systemInputMarginView;
@property (nonatomic, readonly) UISystemInputViewController *_systemInputViewController;
@property (nonatomic) bool _tabBarHidden;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) bool automaticallyShowsCancelButton;
@property (nonatomic) bool automaticallyShowsScopeBar;
@property (nonatomic) bool automaticallyShowsSearchResultsController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISearchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dimsBackgroundDuringPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesNavigationBarDuringPresentation;
@property (nonatomic) bool obscuresBackgroundDuringPresentation;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) UIViewController *searchResultsController;
@property (nonatomic) <UISearchResultsUpdating> *searchResultsUpdater;
@property (nonatomic) bool showsSearchResultsController;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_resignSearchBarAsFirstResponder:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1 oldPaletteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_allowFormSheetStylePresentation;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(bool)arg2;
- (bool)_automaticallyShowsCancelButton;
- (bool)_automaticallyShowsScopeBar;
- (bool)_automaticallyShowsSearchResultsController;
- (int)_barPresentationStyle;
- (void)_beginWatchingPresentingController;
- (id)_carPlayLimitedUIToken;
- (id)_carPlayLimitedUIViewController;
- (void)_commonInit;
- (void)_connectSearchBar:(id)arg1;
- (bool)_containedInNavigationPaletteAndNotHidden;
- (id)_createAnimationCoordinator;
- (void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1;
- (id)_defaultAnimationController;
- (bool)_delegateWantsInsertSearchFieldTextSuggestion;
- (void)_didDismissSearchController;
- (void)_didPresentFromViewController:(id)arg1;
- (bool)_disableAutomaticKeyboardUI;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_dismissPresentation:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)_endWatchingPresentingController;
- (void)_installBackGestureRecognizer;
- (void)_installDoneGestureRecognizer;
- (bool)_isShowingSearchResultsControllerWhileActive;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_limitedUIDidChangeAnimated:(bool)arg1;
- (id)_locatePresentingViewController;
- (id)_locatePresentingViewControllerIfInManagedPaletteOrHostedByNavigationBar;
- (id)_managedPalette;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (id)_navigationItemCurrentlyDisplayingSearchController;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_performAutomaticPresentation;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (long long)_previousSearchBarPosition;
- (void)_removeCarPlayLimitedUIObserver;
- (unsigned long long)_requestedInteractionModel;
- (bool)_requiresCustomPresentationController;
- (void)_resizeResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (double)_resultsContentScrollViewPresentationOffset;
- (id)_resultsControllerViewContainer;
- (bool)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)_searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (bool)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (void)_searchBarTokensDidChange:(id)arg1;
- (id)_searchPresentationController;
- (bool)_searchbarWasTableHeaderView;
- (void)_sendDelegateInsertSearchFieldTextSuggestion:(id)arg1;
- (void)_setAutomaticallyShowsCancelButton:(bool)arg1;
- (void)_setAutomaticallyShowsScopeBar:(bool)arg1;
- (void)_setAutomaticallyShowsSearchResultsController:(bool)arg1;
- (void)_setCarPlayLimitedUIToken:(id)arg1;
- (void)_setCarPlayLimitedUIViewController:(id)arg1;
- (void)_setRequestedInteractionModel:(unsigned long long)arg1;
- (void)_setShouldRespectPreferredContentSize:(bool)arg1;
- (void)_setShowResultsForEmptySearch:(bool)arg1;
- (void)_setShowsSearchResultsController:(bool)arg1;
- (void)_setTransitioningOutWithoutDisappearing:(bool)arg1;
- (void)_setupForCurrentTraitCollection;
- (bool)_shouldRespectPreferredContentSize;
- (bool)_showResultsForEmptySearch;
- (bool)_showsSearchResultsController;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (void)_startManagingPalette:(id)arg1;
- (void)_stopManagingPalette;
- (id)_systemInputMarginView;
- (id)_systemInputViewController;
- (bool)_tabBarHidden;
- (bool)_transitioningOutWithoutDisappearing;
- (void)_uninstallBackGestureRecognizer;
- (void)_uninstallDoneGestureRecognizer;
- (void)_updateBarPresentationStyleForPresentingViewController:(id)arg1;
- (void)_updateFocusFromDoneButton:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSystemInputViewController;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (void)_watchScrollView:(id)arg1 forScrolling:(bool)arg2;
- (void)_willDismissSearchController;
- (void)_willPresentFromViewController:(id)arg1;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (bool)automaticallyShowsCancelButton;
- (bool)automaticallyShowsScopeBar;
- (bool)automaticallyShowsSearchResultsController;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)dimsBackgroundDuringPresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)focusItemContainer;
- (bool)hidesNavigationBarDuringPresentation;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSearchResultsController:(id)arg1;
- (bool)isActive;
- (void)loadView;
- (bool)obscuresBackgroundDuringPresentation;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredFocusEnvironments;
- (id)searchBar;
- (id)searchResultsController;
- (id)searchResultsUpdater;
- (void)setActive:(bool)arg1;
- (void)setAutomaticallyShowsCancelButton:(bool)arg1;
- (void)setAutomaticallyShowsScopeBar:(bool)arg1;
- (void)setAutomaticallyShowsSearchResultsController:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsBackgroundDuringPresentation:(bool)arg1;
- (void)setHidesNavigationBarDuringPresentation:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setObscuresBackgroundDuringPresentation:(bool)arg1;
- (void)setSearchResultsUpdater:(id)arg1;
- (void)setShowsSearchResultsController:(bool)arg1;
- (void)set_navigationItemCurrentlyDisplayingSearchController:(id)arg1;
- (void)set_previousSearchBarPosition:(long long)arg1;
- (void)set_resultsContentScrollViewPresentationOffset:(double)arg1;
- (void)set_resultsControllerViewContainer:(id)arg1;
- (void)set_systemInputMarginView:(id)arg1;
- (void)set_tabBarHidden:(bool)arg1;
- (bool)showsSearchResultsController;
- (void)traitCollectionDidChange:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)presenterDidAppear:(id)arg1;
- (void)presenterDidDisappear:(id)arg1;
- (void)presenterWillAppear:(id)arg1;
- (void)presenterWillDisappear:(id)arg1;

@end
