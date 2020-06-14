//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSData;

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying>
{
    NSData *_sessionIdentifier;
    unsigned int _sessionState;
    _Bool _assert;
    struct {
        unsigned int sessionState:1;
        unsigned int assert:1;
    } _has;
}

@property(nonatomic) unsigned int sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) NSData *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) _Bool assert; // @synthesize assert=_assert;
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
@property(nonatomic) _Bool hasSessionState;
@property(readonly, nonatomic) _Bool hasSessionIdentifier;
@property(nonatomic) _Bool hasAssert;

@end

