//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBURLMapping : PBCodable <NSCopying>
{
    NSMutableArray *_domains;
}

+ (Class)domainsType;
@property(retain, nonatomic) NSMutableArray *domains; // @synthesize domains=_domains;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)domainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)domainsCount;
- (void)addDomains:(id)arg1;
- (void)clearDomains;

@end

