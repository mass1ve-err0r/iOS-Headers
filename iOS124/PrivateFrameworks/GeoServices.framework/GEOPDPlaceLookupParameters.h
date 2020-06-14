//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _muids;
    NSMutableArray *_identifiers;
    int _resultProviderId;
    _Bool _enablePartialClientization;
    CDStruct_2527025c _has;
}

+ (Class)identifierType;
@property(nonatomic) _Bool enablePartialClientization; // @synthesize enablePartialClientization=_enablePartialClientization;
@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEnablePartialClientization;
- (void)setMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)muidAtIndex:(unsigned long long)arg1;
- (void)addMuid:(unsigned long long)arg1;
- (void)clearMuids;
@property(readonly, nonatomic) unsigned long long *muids;
@property(readonly, nonatomic) unsigned long long muidsCount;
@property(nonatomic) _Bool hasResultProviderId;
- (void)dealloc;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (void)addIdentifier:(id)arg1;
- (void)clearIdentifiers;
@property(retain, nonatomic) NSMutableArray *identifiers;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;

@end

