//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKMultiplayerService-Protocol.h>

@class GKGameInternal, NSArray;

@protocol GKMultiplayerServicePrivate <GKMultiplayerService>
- (oneway void)invitePlayersV2:(NSArray *)arg1 toGame:(GKGameInternal *)arg2 handler:(void (^)(void))arg3;
@end
