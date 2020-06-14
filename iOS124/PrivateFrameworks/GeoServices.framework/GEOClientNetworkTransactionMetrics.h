//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOClientNetworkTransactionMetrics : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _connectEnd;
    double _connectStart;
    double _domainLookupEnd;
    double _domainLookupStart;
    double _fetchStart;
    double _requestEnd;
    double _requestStart;
    double _responseEnd;
    double _responseStart;
    double _secureConnectEnd;
    double _secureConnectStart;
    int _protocolName;
    int _resourceFetchType;
    _Bool _proxyConnection;
    _Bool _reusedConnection;
    CDStruct_63f2c340 _has;
}

@property(nonatomic) _Bool reusedConnection; // @synthesize reusedConnection=_reusedConnection;
@property(nonatomic) _Bool proxyConnection; // @synthesize proxyConnection=_proxyConnection;
@property(nonatomic) double responseEnd; // @synthesize responseEnd=_responseEnd;
@property(nonatomic) double responseStart; // @synthesize responseStart=_responseStart;
@property(nonatomic) double requestEnd; // @synthesize requestEnd=_requestEnd;
@property(nonatomic) double requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) double connectEnd; // @synthesize connectEnd=_connectEnd;
@property(nonatomic) double secureConnectEnd; // @synthesize secureConnectEnd=_secureConnectEnd;
@property(nonatomic) double secureConnectStart; // @synthesize secureConnectStart=_secureConnectStart;
@property(nonatomic) double connectStart; // @synthesize connectStart=_connectStart;
@property(nonatomic) double domainLookupEnd; // @synthesize domainLookupEnd=_domainLookupEnd;
@property(nonatomic) double domainLookupStart; // @synthesize domainLookupStart=_domainLookupStart;
@property(nonatomic) double fetchStart; // @synthesize fetchStart=_fetchStart;
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
- (int)StringAsResourceFetchType:(id)arg1;
- (id)resourceFetchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasResourceFetchType;
@property(nonatomic) int resourceFetchType; // @synthesize resourceFetchType=_resourceFetchType;
@property(nonatomic) _Bool hasReusedConnection;
@property(nonatomic) _Bool hasProxyConnection;
- (int)StringAsProtocolName:(id)arg1;
- (id)protocolNameAsString:(int)arg1;
@property(nonatomic) _Bool hasProtocolName;
@property(nonatomic) int protocolName; // @synthesize protocolName=_protocolName;
@property(nonatomic) _Bool hasResponseEnd;
@property(nonatomic) _Bool hasResponseStart;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) _Bool hasConnectEnd;
@property(nonatomic) _Bool hasSecureConnectEnd;
@property(nonatomic) _Bool hasSecureConnectStart;
@property(nonatomic) _Bool hasConnectStart;
@property(nonatomic) _Bool hasDomainLookupEnd;
@property(nonatomic) _Bool hasDomainLookupStart;
@property(nonatomic) _Bool hasFetchStart;

@end

