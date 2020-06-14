//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import <ScreenshotServices/SSActiveInterfaceOrientationObserverDelegate-Protocol.h>
#import <ScreenshotServices/SSDittoHostViewControllerDelegate-Protocol.h>

@class NSObject, SSActiveInterfaceOrientationObserver, SSScreenshotsWindowRootViewController;
@protocol OS_dispatch_queue;

@interface SSScreenshotsWindow : UIWindow <SSDittoHostViewControllerDelegate, SSActiveInterfaceOrientationObserverDelegate>
{
    SSActiveInterfaceOrientationObserver *_activeInterfaceOrientationObserver;
    SSScreenshotsWindowRootViewController *_root;
    long long _lastActiveInterfaceOrientation;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _lockNotificationToken;
    int _backlightNotificationToken;
}

+ (_Bool)_isSecure;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_deviceBacklightChanged:(unsigned long long)arg1;
- (void)_deviceLockStateChanged:(unsigned long long)arg1;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (void)activeInterfaceOrientationObserver:(id)arg1 observedChangeToInterfaceOrientation:(long long)arg2 withDuration:(double)arg3;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldControlAutorotation;
- (void)remoteViewControllerDisconnectedFromHostViewController:(id)arg1 withError:(id)arg2;
- (void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)arg1;
- (void)_dismiss;
- (id)_hostViewControllerIfExists;
- (void)_prepareRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)activateRemoteViewControllerIfAppropriate;
- (_Bool)_canBecomeKeyWindow;
- (void)dealloc;
- (id)init;

@end

