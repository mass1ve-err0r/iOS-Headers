//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPNetworkTimingData-Protocol.h>

@class NSData, NSString, _CPTCPInfo, _CPTuscanyConnectionInfo;

@interface _CPNetworkTimingData : PBCodable <_CPNetworkTimingData, NSSecureCoding>
{
    _Bool _connectionRace;
    _Bool _connectionReused;
    _Bool _QUICWhitelistedDomain;
    _Bool _TFOSuccess;
    unsigned int _redirectCount;
    unsigned int _redirectCountW3C;
    unsigned int _requestHeaderSize;
    unsigned int _responseBodyBytesDecoded;
    unsigned int _responseBodyBytesReceived;
    unsigned int _responseHeaderSize;
    unsigned int _connectStart;
    unsigned int _connectEnd;
    unsigned int _domainLookupStart;
    unsigned int _domainLookupEnd;
    unsigned int _fetchStart;
    unsigned int _redirectStart;
    unsigned int _redirectEnd;
    unsigned int _requestStart;
    unsigned int _requestEnd;
    unsigned int _responseStart;
    unsigned int _responseEnd;
    unsigned int _secureConnectStart;
    NSString *_interfaceIdentifier;
    NSData *_peerAddress;
    _CPTCPInfo *_startTimeCounts;
    _CPTCPInfo *_stopTimeCounts;
    NSString *_connectionUUID;
    NSString *_networkProtocolName;
    double _timingDataInit;
    _CPTuscanyConnectionInfo *_tuscany;
}

+ (id)startMetricsForNormalization;
@property(nonatomic) unsigned int secureConnectStart; // @synthesize secureConnectStart=_secureConnectStart;
@property(nonatomic) unsigned int responseEnd; // @synthesize responseEnd=_responseEnd;
@property(nonatomic) unsigned int responseStart; // @synthesize responseStart=_responseStart;
@property(nonatomic) unsigned int requestEnd; // @synthesize requestEnd=_requestEnd;
@property(nonatomic) unsigned int requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) unsigned int redirectEnd; // @synthesize redirectEnd=_redirectEnd;
@property(nonatomic) unsigned int redirectStart; // @synthesize redirectStart=_redirectStart;
@property(nonatomic) unsigned int fetchStart; // @synthesize fetchStart=_fetchStart;
@property(nonatomic) unsigned int domainLookupEnd; // @synthesize domainLookupEnd=_domainLookupEnd;
@property(nonatomic) unsigned int domainLookupStart; // @synthesize domainLookupStart=_domainLookupStart;
@property(nonatomic) unsigned int connectEnd; // @synthesize connectEnd=_connectEnd;
@property(nonatomic) unsigned int connectStart; // @synthesize connectStart=_connectStart;
@property(retain, nonatomic) _CPTuscanyConnectionInfo *tuscany; // @synthesize tuscany=_tuscany;
@property(nonatomic) double timingDataInit; // @synthesize timingDataInit=_timingDataInit;
@property(nonatomic) _Bool TFOSuccess; // @synthesize TFOSuccess=_TFOSuccess;
@property(nonatomic) unsigned int responseHeaderSize; // @synthesize responseHeaderSize=_responseHeaderSize;
@property(nonatomic) unsigned int responseBodyBytesReceived; // @synthesize responseBodyBytesReceived=_responseBodyBytesReceived;
@property(nonatomic) unsigned int responseBodyBytesDecoded; // @synthesize responseBodyBytesDecoded=_responseBodyBytesDecoded;
@property(nonatomic) unsigned int requestHeaderSize; // @synthesize requestHeaderSize=_requestHeaderSize;
@property(nonatomic) unsigned int redirectCountW3C; // @synthesize redirectCountW3C=_redirectCountW3C;
@property(nonatomic) unsigned int redirectCount; // @synthesize redirectCount=_redirectCount;
@property(nonatomic) _Bool QUICWhitelistedDomain; // @synthesize QUICWhitelistedDomain=_QUICWhitelistedDomain;
@property(copy, nonatomic) NSString *networkProtocolName; // @synthesize networkProtocolName=_networkProtocolName;
@property(copy, nonatomic) NSString *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(retain, nonatomic) _CPTCPInfo *stopTimeCounts; // @synthesize stopTimeCounts=_stopTimeCounts;
@property(retain, nonatomic) _CPTCPInfo *startTimeCounts; // @synthesize startTimeCounts=_startTimeCounts;
@property(nonatomic) _Bool connectionReused; // @synthesize connectionReused=_connectionReused;
@property(nonatomic) _Bool connectionRace; // @synthesize connectionRace=_connectionRace;
@property(copy, nonatomic) NSData *peerAddress; // @synthesize peerAddress=_peerAddress;
@property(copy, nonatomic) NSString *interfaceIdentifier; // @synthesize interfaceIdentifier=_interfaceIdentifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (_Bool)requiresQueryId;
- (id)initWithTelemetryDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

