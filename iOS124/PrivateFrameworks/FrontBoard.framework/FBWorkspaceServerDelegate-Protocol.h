//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSWorkspaceConnectEvent, FBSWorkspaceCreateSceneRequestEvent, FBSWorkspaceDestroySceneRequestEvent, FBWorkspaceServer;

@protocol FBWorkspaceServerDelegate <NSObject>
- (void)server:(FBWorkspaceServer *)arg1 handleDestroySceneRequest:(FBSWorkspaceDestroySceneRequestEvent *)arg2 withCompletion:(void (^)(void))arg3;
- (void)server:(FBWorkspaceServer *)arg1 handleCreateSceneRequest:(FBSWorkspaceCreateSceneRequestEvent *)arg2 withCompletion:(void (^)(FBScene *))arg3;
- (void)server:(FBWorkspaceServer *)arg1 handleConnectEvent:(FBSWorkspaceConnectEvent *)arg2;
- (void)serverDidInvalidateConnection:(FBWorkspaceServer *)arg1;
@end

