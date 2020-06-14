//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ASCodableFriendList : PBCodable <NSCopying>
{
    NSMutableArray *_friends;
}

+ (Class)friendType;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends=_friends;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)friendAtIndex:(unsigned long long)arg1;
- (unsigned long long)friendsCount;
- (void)addFriend:(id)arg1;
- (void)clearFriends;

@end

