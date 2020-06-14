//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKUIRemoteViewController.h>

#import <GameCenterUI/GKChallengeIssueHostProtocol-Protocol.h>

@class GKGame, GKHostedChallengeIssueController, NSString;

@interface GKChallengeIssueHostViewController : GKUIRemoteViewController <GKChallengeIssueHostProtocol>
{
    GKHostedChallengeIssueController *_delegateWeak;
}

+ (id)challengeExtension;
- (id)extensionObjectProxy;
- (void)extensionIsCanceling;
- (void)messageFromExtension:(id)arg1;
@property(nonatomic) GKHostedChallengeIssueController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

