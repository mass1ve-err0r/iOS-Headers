//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface FCCKPResponseOperationResultErrorExtension : PBCodable <NSCopying>
{
    NSString *_extensionName;
    NSData *_extensionPayload;
    unsigned int _typeCode;
    struct {
        unsigned int typeCode:1;
    } _has;
}

@property(retain, nonatomic) NSData *extensionPayload; // @synthesize extensionPayload=_extensionPayload;
@property(nonatomic) unsigned int typeCode; // @synthesize typeCode=_typeCode;
@property(retain, nonatomic) NSString *extensionName; // @synthesize extensionName=_extensionName;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasExtensionPayload;
@property(nonatomic) _Bool hasTypeCode;
@property(readonly, nonatomic) _Bool hasExtensionName;
- (void)dealloc;

@end

