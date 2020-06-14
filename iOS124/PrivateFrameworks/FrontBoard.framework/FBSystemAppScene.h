//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSScene.h>

#import <FrontBoard/FBSSceneDelegate-Protocol.h>

@class FBSSceneImpl, NSString;
@protocol FBSSceneDelegate;

@interface FBSystemAppScene : FBSScene <FBSSceneDelegate>
{
    FBSSceneImpl *_scene;
    id <FBSSceneDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, copy) NSString *description;
- (_Bool)invalidateSnapshotWithContext:(id)arg1;
- (_Bool)performSnapshotWithContext:(id)arg1;
- (id)snapshotRequest;
- (void)detachSceneContext:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)attachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)updateClientSettingsWithTransitionBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (id)layers;
- (id)clientSettings;
- (id)settings;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)identifier;
- (id)_initWithSceneImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

