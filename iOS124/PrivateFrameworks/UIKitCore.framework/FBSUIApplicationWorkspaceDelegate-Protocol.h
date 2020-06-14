//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/FBSWorkspaceDelegate-Protocol.h>

@class FBSSceneTransitionContext, FBSUIApplicationWorkspace;

@protocol FBSUIApplicationWorkspaceDelegate <FBSWorkspaceDelegate>
- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1;
- (void)workspace:(FBSUIApplicationWorkspace *)arg1 didLaunchWithCompletion:(void (^)(FBSUIApplicationLaunchResponse *))arg2;

@optional
- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1 withTransitionContext:(FBSSceneTransitionContext *)arg2;
- (void)workspaceNoteAssertionExpirationImminent:(FBSUIApplicationWorkspace *)arg1;
@end

