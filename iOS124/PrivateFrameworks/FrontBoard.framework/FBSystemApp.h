//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import <FrontBoard/BKSSystemApplicationDelegate-Protocol.h>
#import <FrontBoard/FBSSceneUpdater-Protocol.h>
#import <FrontBoard/FBSceneClient-Protocol.h>
#import <FrontBoard/FBSceneClientProvider-Protocol.h>

@class FBDisplayLayoutTransition, FBSceneClientProviderInvalidationAction, NSMapTable, NSMutableDictionary, NSString;

@interface FBSystemApp : UIApplication <BKSSystemApplicationDelegate, FBSceneClient, FBSSceneUpdater, FBSceneClientProvider>
{
    struct __CFBoolean *_darkboot;
    struct __CFBoolean *_wasDarkboot;
    FBDisplayLayoutTransition *_interfaceOrientationTransition;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSMutableDictionary *_localSceneInfoByIdentifier;
    NSMapTable *_hostsByIdentifier;
    id _didFinishLaunchingObserver;
}

+ (_Bool)systemApplicationIsAliveForWatchdog:(id)arg1;
+ (void)postFrontBoardInitializationHook;
+ (void)preFrontBoardInitializationHook;
+ (void)initializeSystemServices;
+ (long long)startupInterfaceOrientation;
+ (id)_newApplicationLibrary;
+ (double)systemIdleSleepInterval;
+ (_Bool)shouldFixMainThreadPriority;
+ (_Bool)shouldCheckInWithBackboard;
+ (_Bool)rendersLocally;
+ (_Bool)registerAsSystemApp;
+ (id)sharedApplicationInfoProvider;
+ (id)sharedApplicationLibrary;
+ (void)_instantiateAppInfoProvider;
- (void).cxx_destruct;
- (void)scene:(id)arg1 sendMessage:(id)arg2 withResponse:(CDUnknownBlockType)arg3;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)scene:(id)arg1 didDetachLayer:(id)arg2;
- (void)scene:(id)arg1 didUpdateLayer:(id)arg2;
- (void)scene:(id)arg1 didAttachLayer:(id)arg2;
- (void)_updateSceneSettingsForScene:(id)arg1 layer:(id)arg2;
- (_Bool)willObserveLayersManually;
- (id)hostProcess;
- (void)unregisterDelegateForSceneID:(id)arg1;
- (void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
- (void)host:(id)arg1 didReceiveActions:(id)arg2;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
- (void)endTransaction;
- (void)beginTransaction;
- (void)unregisterHost:(id)arg1;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)_setDarkBoot:(_Bool)arg1;
- (void)_performApplicationDidFinishLaunchingTasksWithCompletion:(CDUnknownBlockType)arg1;
- (void)noteActiveInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithSettings:(id)arg2 fromOrientation:(long long)arg3;
- (void)noteActiveInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (long long)_interfaceOrientationRotationDirectionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (id)_newSceneForWindow:(id)arg1 oldDisplay:(id)arg2 newDisplay:(id)arg3;
- (_Bool)_openURL:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)_saveSnapshotWithName:(id)arg1;
- (_Bool)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1;
- (void)resetIdleTimerAndUndim;
- (_Bool)isSuspendedUnderLock;
- (_Bool)isSuspendedEventsOnly;
- (_Bool)isSuspended;
- (_Bool)isFrontBoard;
- (unsigned long long)lastExitReason;
- (void)sendActionsToBackboard:(id)arg1;
- (_Bool)wasBootedDark;
- (_Bool)isBootingDark;
- (id)fbsSceneWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

