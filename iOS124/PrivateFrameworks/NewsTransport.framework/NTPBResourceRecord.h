//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBRecordBase;

@interface NTPBResourceRecord : PBCodable <NSCopying>
{
    NTPBRecordBase *_base;
    NSString *_encoding;
    NSString *_mimeType;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasEncoding;
@property(readonly, nonatomic) _Bool hasMimeType;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;

@end

