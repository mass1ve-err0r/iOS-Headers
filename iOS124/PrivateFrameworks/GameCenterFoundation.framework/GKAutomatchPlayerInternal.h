//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKSpecialPlayerInternal.h>

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal
{
    long long _automatchPosition;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long automatchPosition; // @synthesize automatchPosition=_automatchPosition;
- (_Bool)isAutomatchPlayer;
- (id)alias;
- (id)gamePlayerID;
- (id)teamPlayerID;
- (id)playerID;

@end

