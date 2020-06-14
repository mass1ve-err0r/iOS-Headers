//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKPlayerInternal.h>

@class NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal
{
    GKPlayerInternal *_hostPlayerInternal;
    NSString *_guestIdentifier;
}

+ (id)secureCodedPropertyKeys;
+ (_Bool)supportsSecureCoding;
- (void)setGuestIdentifier:(id)arg1;
- (id)guestIdentifier;
@property(retain, nonatomic) GKPlayerInternal *hostPlayerInternal; // @synthesize hostPlayerInternal=_hostPlayerInternal;
- (_Bool)isGuestPlayer;
- (id)playerID;
- (id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2;
- (void)dealloc;

@end

