//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceClientDelegate-Protocol.h>

@class FBSUIApplicationExitEvent, FBSUIApplicationLaunchEvent, FBSWorkspaceClient;

@protocol FBSUIApplicationWorkspaceClientDelegate <FBSWorkspaceClientDelegate>
- (void)clientHandleAssertionExpirationImminent:(FBSWorkspaceClient *)arg1;
- (void)client:(FBSWorkspaceClient *)arg1 handleExit:(FBSUIApplicationExitEvent *)arg2;
- (void)client:(FBSWorkspaceClient *)arg1 handleLaunch:(FBSUIApplicationLaunchEvent *)arg2 withCompletion:(void (^)(FBSUIApplicationLaunchResponseEvent *))arg3;
@end
