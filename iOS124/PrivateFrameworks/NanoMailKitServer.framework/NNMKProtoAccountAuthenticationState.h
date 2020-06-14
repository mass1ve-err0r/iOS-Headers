//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying>
{
    NSString *_accountId;
    unsigned int _standaloneState;
    struct {
        unsigned int standaloneState:1;
    } _has;
}

@property(nonatomic) unsigned int standaloneState; // @synthesize standaloneState=_standaloneState;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
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
@property(nonatomic) _Bool hasStandaloneState;
@property(readonly, nonatomic) _Bool hasAccountId;

@end

