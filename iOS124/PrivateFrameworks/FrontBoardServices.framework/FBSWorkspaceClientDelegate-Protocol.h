//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSWorkspaceActionsEvent, FBSWorkspaceClient, FBSWorkspaceCreateSceneEvent, FBSWorkspaceDestroySceneEvent;

@protocol FBSWorkspaceClientDelegate <NSObject>
- (void)client:(FBSWorkspaceClient *)arg1 handleActions:(FBSWorkspaceActionsEvent *)arg2;
- (void)client:(FBSWorkspaceClient *)arg1 handleDestroyScene:(FBSWorkspaceDestroySceneEvent *)arg2 withCompletion:(void (^)(FBSWorkspaceDestroySceneResponseEvent *))arg3;
- (void)client:(FBSWorkspaceClient *)arg1 handleCreateScene:(FBSWorkspaceCreateSceneEvent *)arg2 withCompletion:(void (^)(FBSWorkspaceCreateSceneResponseEvent *))arg3;
- (void)clientEndTransaction:(FBSWorkspaceClient *)arg1;
- (void)clientBeginTransaction:(FBSWorkspaceClient *)arg1;
- (void)clientSystemApplicationTerminated:(FBSWorkspaceClient *)arg1;
@end

