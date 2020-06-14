//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKUIRemoteViewController.h>

#import <GameCenterUI/GKAuthenticateHostProtocol-Protocol.h>

@class GKGame, GKHostedAuthenticateViewController, NSString;

@interface GKAuthenticateHostViewController : GKUIRemoteViewController <GKAuthenticateHostProtocol>
{
    GKHostedAuthenticateViewController *_delegateWeak;
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)authenticateExtension;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (void)messageFromExtension:(id)arg1;
@property(nonatomic) GKHostedAuthenticateViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

