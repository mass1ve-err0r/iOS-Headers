//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoRegistrationDataResponse : PBCodable <NSCopying>
{
    NSString *_pushToken;
    NSData *_registrationDataBytes;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property(retain, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSData *registrationDataBytes; // @synthesize registrationDataBytes=_registrationDataBytes;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
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
@property(readonly, nonatomic) _Bool hasPushToken;
@property(readonly, nonatomic) _Bool hasRegistrationDataBytes;
@property(nonatomic) _Bool hasPending;

@end

