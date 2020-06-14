//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOClientMetrics, GEOETAResult, GEOETAServiceResponseSummary, GEOPDDatasetABStatus, GEOPlaceSearchResponse, NSMutableArray, NSString;

@interface GEOETAResponse : PBCodable <NSCopying>
{
    unsigned long long _debugServerLatencyMs;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    NSMutableArray *_etaResultReferencePointDestinations;
    GEOETAResult *_etaResultReferencePointOrigin;
    NSMutableArray *_etaResults;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    int _status;
    CDStruct_00a28cb6 _has;
}

+ (Class)etaResultReferencePointDestinationType;
+ (Class)etaResultType;
@property(retain, nonatomic) NSString *debugData; // @synthesize debugData=_debugData;
@property(retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus; // @synthesize datasetAbStatus=_datasetAbStatus;
@property(retain, nonatomic) NSMutableArray *etaResultReferencePointDestinations; // @synthesize etaResultReferencePointDestinations=_etaResultReferencePointDestinations;
@property(retain, nonatomic) GEOETAResult *etaResultReferencePointOrigin; // @synthesize etaResultReferencePointOrigin=_etaResultReferencePointOrigin;
@property(retain, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse; // @synthesize originPlaceSearchResponse=_originPlaceSearchResponse;
@property(retain, nonatomic) NSMutableArray *etaResults; // @synthesize etaResults=_etaResults;
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
@property(readonly, nonatomic) _Bool hasDebugData;
@property(readonly, nonatomic) _Bool hasDatasetAbStatus;
- (id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)etaResultReferencePointDestinationsCount;
- (void)addEtaResultReferencePointDestination:(id)arg1;
- (void)clearEtaResultReferencePointDestinations;
@property(readonly, nonatomic) _Bool hasEtaResultReferencePointOrigin;
- (void)setProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;
- (struct GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail)arg1;
- (void)clearProblemDetails;
@property(readonly, nonatomic) struct GEOProblemDetail *problemDetails;
@property(readonly, nonatomic) unsigned long long problemDetailsCount;
@property(readonly, nonatomic) _Bool hasOriginPlaceSearchResponse;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)etaResultsCount;
- (void)addEtaResult:(id)arg1;
- (void)clearEtaResults;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)dealloc;
@property(nonatomic) _Bool hasDebugServerLatencyMs;
@property(nonatomic) unsigned long long debugServerLatencyMs;
@property(retain, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property(readonly, nonatomic) _Bool hasEtaServiceSummary;
@property(retain, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) _Bool hasClientMetrics;

@end

