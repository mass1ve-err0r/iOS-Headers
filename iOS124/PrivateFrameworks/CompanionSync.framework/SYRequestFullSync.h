//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYMessageHeader;

@interface SYRequestFullSync : PBCodable <NSCopying>
{
    SYMessageHeader *_header;
    NSString *_syncID;
}

@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
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

@end

