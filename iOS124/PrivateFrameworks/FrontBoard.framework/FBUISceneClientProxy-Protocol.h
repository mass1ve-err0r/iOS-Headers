//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;
@protocol FBUISceneHostProxy;

@protocol FBUISceneClientProxy <NSObject, BSDescriptionProviding>
- (void)didInvalidateSceneHost:(id <FBUISceneHostProxy>)arg1;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 didReceiveActions:(NSSet *)arg2;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 destroySceneWithTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 didUpdateSettings:(FBSSceneSettings *)arg2 withDiff:(FBSSceneSettingsDiff *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4 completion:(void (^)(_Bool, NSError *))arg5;
@end

