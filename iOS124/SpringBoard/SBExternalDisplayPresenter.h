//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"
#import "SBSceneHandleObserver-Protocol.h"

@class CADisplay, CADisplayMode, FBSDisplayConfiguration, FBSDisplayIdentity, FBScene, NSString, SBApplication, SBApplicationSceneHandle, _UIRootWindow;
@protocol OS_dispatch_queue;

@interface SBExternalDisplayPresenter : NSObject <SBSceneHandleObserver, BSInvalidatable>
{
    FBSDisplayIdentity *_identity;
    CADisplay *_caDisplay;
    _Bool _invalidated;
    FBSDisplayConfiguration *_currentConfiguration;
    FBSDisplayConfiguration *_currentReportedConfiguration;
    SBApplication *_foregroundApp;
    SBApplicationSceneHandle *_foregroundAppSceneHandle;
    FBScene *_foregroundAppScene;
    unsigned long long _foregroundAppSequenceNumber;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    unsigned long long _displayMutationEnqueuedCount;
    unsigned long long _displayMutationCompletedCount;
    CADisplayMode *_requestedMode;
    NSString *_requestedOverscanAdjustment;
    _UIRootWindow *_rootWindow;
    FBSDisplayConfiguration *_rootWindowConfiguration;
    SBApplicationSceneHandle *_presentationSceneHandle;
    FBScene *_presentationScene;
    FBSDisplayConfiguration *_presentationSceneConfiguration;
    _Bool _hasEnqueuedPresentationUpdate;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)_enqueuePresentationUpdate;
- (void)_ensureMode:(id)arg1 overscanCompensation:(long long)arg2;
- (id)_createUpdateTransaction;
- (id)updateToConfiguration:(id)arg1 withForegroundApp:(id)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDisplayConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
