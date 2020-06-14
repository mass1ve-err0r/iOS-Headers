//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying>
{
    NSString *_analyticsBaseUrl;
    NSString *_analyticsId;
    NSString *_eventQueryParameterName;
    NSMutableArray *_proxyHostNames;
    NSMutableArray *_queryParameterConfigs;
    _Bool _usesProxyProfile;
    struct {
        unsigned int usesProxyProfile:1;
    } _has;
}

+ (Class)proxyHostNamesType;
+ (Class)queryParameterConfigType;
@property(retain, nonatomic) NSMutableArray *proxyHostNames; // @synthesize proxyHostNames=_proxyHostNames;
@property(nonatomic) _Bool usesProxyProfile; // @synthesize usesProxyProfile=_usesProxyProfile;
@property(retain, nonatomic) NSMutableArray *queryParameterConfigs; // @synthesize queryParameterConfigs=_queryParameterConfigs;
@property(retain, nonatomic) NSString *eventQueryParameterName; // @synthesize eventQueryParameterName=_eventQueryParameterName;
@property(retain, nonatomic) NSString *analyticsId; // @synthesize analyticsId=_analyticsId;
@property(retain, nonatomic) NSString *analyticsBaseUrl; // @synthesize analyticsBaseUrl=_analyticsBaseUrl;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)proxyHostNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)proxyHostNamesCount;
- (void)addProxyHostNames:(id)arg1;
- (void)clearProxyHostNames;
@property(nonatomic) _Bool hasUsesProxyProfile;
- (id)queryParameterConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryParameterConfigsCount;
- (void)addQueryParameterConfig:(id)arg1;
- (void)clearQueryParameterConfigs;
@property(readonly, nonatomic) _Bool hasEventQueryParameterName;
@property(readonly, nonatomic) _Bool hasAnalyticsId;
@property(readonly, nonatomic) _Bool hasAnalyticsBaseUrl;

@end

