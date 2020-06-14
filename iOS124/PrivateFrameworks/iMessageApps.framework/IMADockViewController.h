//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <iMessageApps/CKBrowserDragControllerTranscriptDelegate-Protocol.h>
#import <iMessageApps/CKBrowserSwitcherFooterViewDelegate-Protocol.h>
#import <iMessageApps/CKBrowserSwitcherViewControllerDelegate-Protocol.h>
#import <iMessageApps/CKBrowserTransitionCoordinatorDelegate-Protocol.h>
#import <iMessageApps/CKBrowserViewControllerSendDelegate-Protocol.h>
#import <iMessageApps/CKFullScreenAppViewControllerDelegate-Protocol.h>

@class CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, CKBrowserSwitcherViewController, CKBrowserTransitionCoordinator, CKFullScreenAppViewController, IMBalloonPlugin, NSString;
@protocol IMADockViewControllerDelegate;

@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate, CKBrowserViewControllerSendDelegate, CKBrowserSwitcherViewControllerDelegate, CKFullScreenAppViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, CKBrowserTransitionCoordinatorDelegate>
{
    CKBrowserSwitcherFooterView *_appStrip;
    CKBrowserSwitcherFooterViewDataSource *_appStripDataSource;
    IMBalloonPlugin *_currentBalloonPlugin;
    CKFullScreenAppViewController *_expandedAppViewController;
    CKBrowserTransitionCoordinator *_alwaysExpandedCoordinator;
    _Bool _isTransitioningPresentationStyles;
    _Bool _alwaysPresentAppsExpanded;
    _Bool _hidesCompactAppForStickerDrag;
    id <IMADockViewControllerDelegate> _delegate;
    CKBrowserSwitcherViewController *_switcherViewController;
}

@property(retain, nonatomic) CKBrowserSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
@property(nonatomic) _Bool hidesCompactAppForStickerDrag; // @synthesize hidesCompactAppForStickerDrag=_hidesCompactAppForStickerDrag;
@property(nonatomic) _Bool alwaysPresentAppsExpanded; // @synthesize alwaysPresentAppsExpanded=_alwaysPresentAppsExpanded;
@property(nonatomic) __weak id <IMADockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (struct CGRect)alwaysExpandedAppViewControllerFrame;
- (id)transitionsPresentationViewController;
- (_Bool)shouldAlwaysShowAppTitle;
- (_Bool)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
- (struct CGSize)browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)commitSticker:(id)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(id)arg1;
- (void)commitPayload:(id)arg1;
- (_Bool)isSwitcherOffscreen;
- (_Bool)isAppCompact;
- (void)positionSwitcherOffscreen:(_Bool)arg1;
- (void)animateSwitcherOffscreen:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSwitcherViewFrame;
- (_Bool)addSwitcherForPlugin:(id)arg1;
- (double)switcherHeight;
- (id)appViewControllerPresenter;
- (void)switcherView:(id)arg1 didMagnify:(_Bool)arg2;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (void)updateAppStripFrame;
- (id)imageViewForSticker:(id)arg1;
- (void)cleanupRunningApps;
- (void)_hideCompactBrowserAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideBrowserAnimated:(_Bool)arg1;
- (void)hideAppViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIViewController *currentAppViewController;
@property(readonly, nonatomic) double minimizedDockHeight;
- (void)notifyDelegateOfSelectedPlugin:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

