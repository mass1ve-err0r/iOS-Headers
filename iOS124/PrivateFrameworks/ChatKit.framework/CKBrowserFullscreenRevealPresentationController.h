//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class CKBrowserFullscreenRevealDimmingView, UIStatusBar, UIStatusBarWindow, UIView;

@interface CKBrowserFullscreenRevealPresentationController : UIPresentationController
{
    _Bool _presenting;
    _Bool _dismissing;
    CDUnknownBlockType _dismissHandler;
    CKBrowserFullscreenRevealDimmingView *_dimmingView;
    UIStatusBar *_statusBar;
    UIStatusBarWindow *_statusBarWindow;
    unsigned long long _statusBarResizeMask;
    UIView *_presentingSnapshotView;
    struct CGRect _presentingSnapshotFrame;
}

@property(nonatomic) struct CGRect presentingSnapshotFrame; // @synthesize presentingSnapshotFrame=_presentingSnapshotFrame;
@property(retain, nonatomic) UIView *presentingSnapshotView; // @synthesize presentingSnapshotView=_presentingSnapshotView;
@property(nonatomic) unsigned long long statusBarResizeMask; // @synthesize statusBarResizeMask=_statusBarResizeMask;
@property(retain, nonatomic) UIStatusBarWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
@property(retain, nonatomic) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) CKBrowserFullscreenRevealDimmingView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (void)_cleanupPresentation;
- (void)_prepareViewHierarchyForPresentation;
- (void)_configureViewsForDismissedState;
- (void)_configureViewsForPresentedState;
- (id)_viewsToApplyCornerRadius;
- (id)_viewsToApplyTransform;
- (void)_willChangeStatusBarFrame:(id)arg1;
- (void)dimmingViewTapped:(id)arg1;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldGrabPresentersView;
- (_Bool)shouldRemovePresentersView;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end

