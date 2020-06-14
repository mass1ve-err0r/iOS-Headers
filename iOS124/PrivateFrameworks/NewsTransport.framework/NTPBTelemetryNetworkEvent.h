//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying>
{
    long long _connectDuration;
    long long _dnsDuration;
    long long _errorCode;
    long long _httpStatusCode;
    long long _requestDuration;
    long long _responseDuration;
    long long _responseSize;
    long long _startTime;
    int _cacheState;
    struct {
        unsigned int connectDuration:1;
        unsigned int dnsDuration:1;
        unsigned int errorCode:1;
        unsigned int httpStatusCode:1;
        unsigned int requestDuration:1;
        unsigned int responseDuration:1;
        unsigned int responseSize:1;
        unsigned int startTime:1;
        unsigned int cacheState:1;
    } _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(nonatomic) long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) long long responseDuration; // @synthesize responseDuration=_responseDuration;
@property(nonatomic) long long requestDuration; // @synthesize requestDuration=_requestDuration;
@property(nonatomic) long long connectDuration; // @synthesize connectDuration=_connectDuration;
@property(nonatomic) long long dnsDuration; // @synthesize dnsDuration=_dnsDuration;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasHttpStatusCode;
@property(nonatomic) _Bool hasCacheState;
@property(nonatomic) int cacheState; // @synthesize cacheState=_cacheState;
@property(nonatomic) _Bool hasResponseSize;
@property(nonatomic) _Bool hasResponseDuration;
@property(nonatomic) _Bool hasRequestDuration;
@property(nonatomic) _Bool hasConnectDuration;
@property(nonatomic) _Bool hasDnsDuration;
@property(nonatomic) _Bool hasStartTime;

@end

