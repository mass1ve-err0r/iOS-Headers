//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKGame, NSData;

@protocol GKExtensionHostProtocol <NSObject>
@property(retain, nonatomic) GKGame *game;
- (void)messageFromExtension:(NSData *)arg1;

@optional
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
@end

