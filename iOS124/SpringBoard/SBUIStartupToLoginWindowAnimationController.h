//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

#import "SBLoginAppContainerViewControllerObserver-Protocol.h"

@class BKSDisplayRenderOverlay, BSTransaction, NSString, SBWindow;

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver>
{
    SBWindow *_transitionWindow;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
    BSTransaction *_waitForLoginAppToFinishLaunchingTransaction;
}

- (void).cxx_destruct;
- (void)loginAppDidFinishLaunching:(id)arg1;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (id)animationSettings;
- (void)_setHidden:(_Bool)arg1;
- (id)_getTransitionWindow;
- (_Bool)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

