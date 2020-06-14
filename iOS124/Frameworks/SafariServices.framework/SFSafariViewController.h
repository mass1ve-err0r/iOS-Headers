//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/SFBrowserRemoteViewControllerDelegate-Protocol.h>
#import <SafariServices/SFInteractiveDismissControllerDelegate-Protocol.h>
#import <SafariServices/SFQueueingServiceViewControllerProxyDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSURL, SFBrowserRemoteViewController, SFInteractiveDismissController, SFQueueingServiceViewControllerProxy, SFSafariLaunchPlaceholderView, SFSafariViewControllerConfiguration, UIColor, _UIAsyncInvocation, _WKActivatedElementInfo;
@protocol SFSafariViewControllerDelegate, SFServiceViewControllerProtocol;

@interface SFSafariViewController : UIViewController <SFBrowserRemoteViewControllerDelegate, SFInteractiveDismissControllerDelegate, SFQueueingServiceViewControllerProxyDelegate>
{
    SFBrowserRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _Bool _hasBeenDisplayedAtLeastOnce;
    NSArray *_previewActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    NSArray *_customActivities;
    NSMutableDictionary *_activitiesMap;
    NSArray *_activityItemsForCustomActivities;
    _Bool _swipeGestureEnabled;
    SFInteractiveDismissController *_interactiveDismissController;
    SFSafariLaunchPlaceholderView *_launchPlaceholderView;
    long long _displayMode;
    SFSafariViewControllerConfiguration *_configuration;
    _Bool _viewSizeIsTransitioning;
    struct UIEdgeInsets _verticalScrollIndicatorBaseInsets;
    struct UIEdgeInsets _horizontalScrollIndicatorBaseInsets;
    _Bool _defersAddingRemoteViewController;
    id <SFSafariViewControllerDelegate> _delegate;
    UIColor *_preferredBarTintColor;
    UIColor *_preferredControlTintColor;
    long long _dismissButtonStyle;
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *_serviceProxy;
    NSURL *_initialURL;
}

@property(nonatomic) _Bool defersAddingRemoteViewController; // @synthesize defersAddingRemoteViewController=_defersAddingRemoteViewController;
@property(readonly, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property(readonly, nonatomic) SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) long long dismissButtonStyle; // @synthesize dismissButtonStyle=_dismissButtonStyle;
@property(retain, nonatomic) UIColor *preferredControlTintColor; // @synthesize preferredControlTintColor=_preferredControlTintColor;
@property(retain, nonatomic) UIColor *preferredBarTintColor; // @synthesize preferredBarTintColor=_preferredBarTintColor;
@property(nonatomic) __weak id <SFSafariViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)interactiveDismissControllerDidCancel:(id)arg1;
- (void)interactiveDismissControllerDidEnd:(id)arg1;
- (void)interactiveDismissControllerDidBegin:(id)arg1;
- (void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(_Bool)arg2;
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(_Bool)arg2;
- (id)_fetchExcludedActivityTypesForURL:(id)arg1 title:(id)arg2;
- (id)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2;
- (void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)_restartServiceViewController;
- (void)viewWillLayoutSubviews;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)remoteViewControllerDidLoadWebView:(id)arg1;
- (void)_addRemoteViewControllerIfNeeded;
- (void)_connectToService;
- (void)_removeRemoteView;
- (void)_setEdgeSwipeDismissalEnabled:(_Bool)arg1;
- (void)_addRemoteView;
- (void)_forwardNotificationToViewService:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateScrollViewIndicatorInsets;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(_Bool)arg2;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
@property(readonly, copy, nonatomic) SFSafariViewControllerConfiguration *configuration;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)_setUpWithURL:(id)arg1 configuration:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(_Bool)arg2;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)_defaultPreviewActionItems;
- (id)previewActionItems;
@property(retain, nonatomic, setter=_setActivatedElementInfo:) _WKActivatedElementInfo *_activatedElementInfo;
@property(retain, nonatomic, setter=_setPreviewActions:) NSArray *_previewActions;
@property(nonatomic, setter=_setShowingLinkPreviewWithMinimalUI:) _Bool _showingLinkPreviewWithMinimalUI;
@property(nonatomic, setter=_setShowingLinkPreview:) _Bool _showingLinkPreview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

