//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRGameControllerPropertiesProtobuf;

@interface _MRRegisterGameControllerMessageProtobuf : PBCodable <NSCopying>
{
    _MRGameControllerPropertiesProtobuf *_properties;
}

@property(retain, nonatomic) _MRGameControllerPropertiesProtobuf *properties; // @synthesize properties=_properties;
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
@property(readonly, nonatomic) _Bool hasProperties;

@end

