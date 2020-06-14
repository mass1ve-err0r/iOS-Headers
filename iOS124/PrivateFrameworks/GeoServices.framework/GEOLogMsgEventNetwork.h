//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONetworkSessionTaskTransactionMetrics, NSString;

@interface GEOLogMsgEventNetwork : PBCodable <NSCopying>
{
    double _requestEnd;
    long long _requestErrorCode;
    double _requestStart;
    int _decodeTime;
    int _httpResponseCode;
    NSString *_manifestEnv;
    int _networkService;
    int _queuedTime;
    int _redirectCount;
    NSString *_requestAppIdentifier;
    int _requestDataSize;
    NSString *_requestErrorDescription;
    NSString *_requestErrorDomain;
    int _responseDataSize;
    NSString *_serviceIpAddress;
    GEONetworkSessionTaskTransactionMetrics *_taskMetrics;
    unsigned int _tilesetId;
    int _totalTime;
    struct {
        unsigned int requestEnd:1;
        unsigned int requestErrorCode:1;
        unsigned int requestStart:1;
        unsigned int decodeTime:1;
        unsigned int httpResponseCode:1;
        unsigned int networkService:1;
        unsigned int queuedTime:1;
        unsigned int redirectCount:1;
        unsigned int requestDataSize:1;
        unsigned int responseDataSize:1;
        unsigned int tilesetId:1;
        unsigned int totalTime:1;
    } _has;
}

@property(retain, nonatomic) GEONetworkSessionTaskTransactionMetrics *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain, nonatomic) NSString *serviceIpAddress; // @synthesize serviceIpAddress=_serviceIpAddress;
@property(nonatomic) unsigned int tilesetId; // @synthesize tilesetId=_tilesetId;
@property(retain, nonatomic) NSString *manifestEnv; // @synthesize manifestEnv=_manifestEnv;
@property(nonatomic) int redirectCount; // @synthesize redirectCount=_redirectCount;
@property(nonatomic) double requestEnd; // @synthesize requestEnd=_requestEnd;
@property(nonatomic) double requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) int decodeTime; // @synthesize decodeTime=_decodeTime;
@property(nonatomic) int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
@property(nonatomic) int totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) int queuedTime; // @synthesize queuedTime=_queuedTime;
@property(retain, nonatomic) NSString *requestAppIdentifier; // @synthesize requestAppIdentifier=_requestAppIdentifier;
@property(retain, nonatomic) NSString *requestErrorDescription; // @synthesize requestErrorDescription=_requestErrorDescription;
@property(nonatomic) long long requestErrorCode; // @synthesize requestErrorCode=_requestErrorCode;
@property(retain, nonatomic) NSString *requestErrorDomain; // @synthesize requestErrorDomain=_requestErrorDomain;
@property(nonatomic) int responseDataSize; // @synthesize responseDataSize=_responseDataSize;
@property(nonatomic) int requestDataSize; // @synthesize requestDataSize=_requestDataSize;
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
@property(readonly, nonatomic) _Bool hasTaskMetrics;
@property(readonly, nonatomic) _Bool hasServiceIpAddress;
@property(nonatomic) _Bool hasTilesetId;
@property(readonly, nonatomic) _Bool hasManifestEnv;
@property(nonatomic) _Bool hasRedirectCount;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) _Bool hasDecodeTime;
@property(nonatomic) _Bool hasHttpResponseCode;
@property(nonatomic) _Bool hasTotalTime;
@property(nonatomic) _Bool hasQueuedTime;
@property(readonly, nonatomic) _Bool hasRequestAppIdentifier;
@property(readonly, nonatomic) _Bool hasRequestErrorDescription;
@property(nonatomic) _Bool hasRequestErrorCode;
@property(readonly, nonatomic) _Bool hasRequestErrorDomain;
@property(nonatomic) _Bool hasResponseDataSize;
@property(nonatomic) _Bool hasRequestDataSize;
- (int)StringAsNetworkService:(id)arg1;
- (id)networkServiceAsString:(int)arg1;
@property(nonatomic) _Bool hasNetworkService;
@property(nonatomic) int networkService; // @synthesize networkService=_networkService;

@end

