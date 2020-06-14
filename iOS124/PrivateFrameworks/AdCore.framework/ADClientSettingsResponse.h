//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying>
{
    double _expirationDate;
    NSMutableArray *_searchAdsSettingsParams;
    struct {
        unsigned int expirationDate:1;
    } _has;
}

+ (Class)searchAdsSettingsParamsType;
@property(retain, nonatomic) NSMutableArray *searchAdsSettingsParams; // @synthesize searchAdsSettingsParams=_searchAdsSettingsParams;
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
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
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchAdsSettingsParamsCount;
- (void)addSearchAdsSettingsParams:(id)arg1;
- (void)clearSearchAdsSettingsParams;
@property(nonatomic) _Bool hasExpirationDate;

@end
