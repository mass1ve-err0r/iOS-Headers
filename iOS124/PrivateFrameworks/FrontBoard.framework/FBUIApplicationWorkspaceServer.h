//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBWorkspaceServer.h>

@interface FBUIApplicationWorkspaceServer : FBWorkspaceServer
{
}

- (_Bool)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)sendProcessAssertionExpirationImminent;
- (void)sendExitEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sendLaunchEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

