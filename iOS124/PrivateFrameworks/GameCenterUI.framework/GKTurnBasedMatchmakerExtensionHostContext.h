//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostContext.h>

#import <GameCenterUI/GKTurnBasedMatchmakerHostProtocol-Protocol.h>

@class GKGame, NSString;

@interface GKTurnBasedMatchmakerExtensionHostContext : GKExtensionHostContext <GKTurnBasedMatchmakerHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

