//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class QLAppearance;
@protocol QLPreviewItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLItemAggregatedViewController : QLItemViewController
{
    _Bool _isVisible;
    _Bool _isAppearing;
    _Bool _fullScreen;
    QLAppearance *_appearance;
    id <QLPreviewItemViewControllerDelegate> _delegate;
    QLItemViewController *_currentPreviewViewController;
}

@property(retain, nonatomic) QLItemViewController *currentPreviewViewController; // @synthesize currentPreviewViewController=_currentPreviewViewController;
- (id)delegate;
- (void).cxx_destruct;
- (id)draggableView;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (id)transitioningView;
- (id)fullscreenBackgroundColor;
- (id)title;
- (struct CGSize)preferredContentSize;
- (id)printer;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)automaticallyUpdateScrollViewIndicatorInset;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (void)endPreviewHostAppearanceTransitionIfNeeded:(_Bool)arg1;
- (void)beginPreviewHostAppearanceTransitionIfNeeded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (id)parallaxView;
- (id)scrollView;
- (_Bool)canShowNavBar;
- (_Bool)canShowToolBar;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (id)safeAreaLayoutGuide;
- (_Bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (id)registeredKeyCommands;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg1;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (id)accessoryView;
- (_Bool)canEnterFullScreen;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)previewWillFinishAppearing;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)appearance;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)showPreviewViewController:(id)arg1;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

