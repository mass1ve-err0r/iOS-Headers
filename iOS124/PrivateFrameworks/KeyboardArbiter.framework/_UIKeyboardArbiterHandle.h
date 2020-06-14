//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardArbiter/_UIKeyboardArbitration-Protocol.h>

@class BKSProcessAssertion, FBSCAContextSceneLayer, NSArray, NSMutableSet, NSString, NSXPCConnection, _UIKeyboardArbiter;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration>
{
    _Bool _invalidated;
    NSString *_bundleIdentifier;
    _UIKeyboardArbiter *_owner;
    _Bool _running;
    FBSCAContextSceneLayer *_sceneLayer;
    NSString *_remoteSceneID;
    _Bool _active;
    _Bool _wantedActive;
    double _level;
    NSMutableSet *_hostedPids;
    _Bool _checkingShowability;
    int _suppressionCount;
    _Bool _wantsFence;
    BKSProcessAssertion *_remoteKeepAliveAssertion;
    unsigned long long _remoteKeepAliveAssertionCount;
    unsigned long long _remoteKeepAliveTimerCount;
    NSArray *_cachedContext;
    NSXPCConnection *_connection;
}

+ (id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2;
@property(readonly) _Bool wantsFence; // @synthesize wantsFence=_wantsFence;
@property(readonly) double level; // @synthesize level=_level;
@property(readonly) _Bool wantedActive; // @synthesize wantedActive=_wantedActive;
@property(readonly) _Bool active; // @synthesize active=_active;
@property(readonly, retain) NSString *remoteSceneID; // @synthesize remoteSceneID=_remoteSceneID;
@property(readonly, retain) FBSCAContextSceneLayer *sceneLayer; // @synthesize sceneLayer=_sceneLayer;
@property _Bool running; // @synthesize running=_running;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)setKeyboardTotalDisable:(_Bool)arg1 withFence:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)uncacheWindowContext;
- (void)cacheWindowContext;
- (void)releaseProcessAssertion;
- (void)takeProcessAssertionOnRemoteWithQueue:(id)arg1;
- (_Bool)isHandlerShowableWithHandler:(id)arg1;
- (id)description;
- (void)retrieveMoreDebugInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveDebugInformation:(CDUnknownBlockType)arg1;
- (void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3;
- (void)notifyHostedPIDsOfSuppression:(_Bool)arg1;
- (void)setWindowHostingPID:(int)arg1 active:(_Bool)arg2;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)setWantsFencing:(_Bool)arg1;
- (void)checkActivation:(_Bool)arg1;
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(id)arg2 forKeyboard:(_Bool)arg3 withLevel:(double)arg4;
- (void)_deactivateScene;
- (void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(_Bool)arg3 withSuppression:(int)arg4 onConnected:(CDUnknownBlockType)arg5;
@property(readonly) int processIdentifier;
- (void)dealloc;

@end

