//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserSwitcherViewController, NSDate, NSIndexPath, UIViewController;
@protocol CKBrowserViewControllerProtocol;

@protocol CKBrowserSwitcherViewControllerDelegate <NSObject>
- (void)switcherViewControllerDidCollapse:(CKBrowserSwitcherViewController *)arg1;
- (void)switcherViewControllerDidFinishSwitching:(CKBrowserSwitcherViewController *)arg1 toViewController:(UIViewController<CKBrowserViewControllerProtocol> *)arg2;

@optional
- (void)switcherViewController:(CKBrowserSwitcherViewController *)arg1 hasUpdatedLastTouchDate:(NSDate *)arg2;
- (void)switcherViewController:(CKBrowserSwitcherViewController *)arg1 willHideSelectionViewWithAnimations:(CDUnknownBlockType *)arg2 completion:(CDUnknownBlockType *)arg3;
- (void)switcherViewController:(CKBrowserSwitcherViewController *)arg1 willShowSelectionViewWithAnimations:(CDUnknownBlockType *)arg2 completion:(CDUnknownBlockType *)arg3;
- (void)switcherViewController:(CKBrowserSwitcherViewController *)arg1 didSelectPluginAtIndexPath:(NSIndexPath *)arg2;
- (void)switcherViewControllerDidStartSwitching:(CKBrowserSwitcherViewController *)arg1;
- (void)switcherViewControllerDidSelectAppManager:(CKBrowserSwitcherViewController *)arg1 shouldRestoreAppSwitcher:(_Bool)arg2;
- (void)switcherViewControllerDidSelectAppStore:(CKBrowserSwitcherViewController *)arg1 shouldRestoreAppSwitcher:(_Bool)arg2;
@end

