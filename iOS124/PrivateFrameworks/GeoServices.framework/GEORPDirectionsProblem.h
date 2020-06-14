//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserSearchInput, NSData, NSMutableArray;

@interface GEORPDirectionsProblem : PBCodable <NSCopying>
{
    NSMutableArray *_clientSuggestedRoutes;
    NSData *_directionsResponseId;
    GEORPUserSearchInput *_endWaypoint;
    NSMutableArray *_instructionCorrections;
    NSData *_overviewScreenshotImageData;
    unsigned int _problematicLineIndex;
    NSMutableArray *_problematicRouteIndexs;
    unsigned int _problematicStepIndex;
    GEORPUserSearchInput *_startWaypoint;
    struct {
        unsigned int problematicLineIndex:1;
        unsigned int problematicStepIndex:1;
    } _has;
}

+ (Class)instructionCorrectionType;
+ (Class)problematicRouteIndexType;
+ (Class)clientSuggestedRouteType;
@property(retain, nonatomic) NSMutableArray *instructionCorrections; // @synthesize instructionCorrections=_instructionCorrections;
@property(retain, nonatomic) GEORPUserSearchInput *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property(retain, nonatomic) GEORPUserSearchInput *startWaypoint; // @synthesize startWaypoint=_startWaypoint;
@property(nonatomic) unsigned int problematicLineIndex; // @synthesize problematicLineIndex=_problematicLineIndex;
@property(retain, nonatomic) NSMutableArray *problematicRouteIndexs; // @synthesize problematicRouteIndexs=_problematicRouteIndexs;
@property(retain, nonatomic) NSMutableArray *clientSuggestedRoutes; // @synthesize clientSuggestedRoutes=_clientSuggestedRoutes;
@property(nonatomic) unsigned int problematicStepIndex; // @synthesize problematicStepIndex=_problematicStepIndex;
@property(retain, nonatomic) NSData *overviewScreenshotImageData; // @synthesize overviewScreenshotImageData=_overviewScreenshotImageData;
@property(retain, nonatomic) NSData *directionsResponseId; // @synthesize directionsResponseId=_directionsResponseId;
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
- (id)instructionCorrectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)instructionCorrectionsCount;
- (void)addInstructionCorrection:(id)arg1;
- (void)clearInstructionCorrections;
@property(readonly, nonatomic) _Bool hasEndWaypoint;
@property(readonly, nonatomic) _Bool hasStartWaypoint;
@property(nonatomic) _Bool hasProblematicLineIndex;
- (id)problematicRouteIndexAtIndex:(unsigned long long)arg1;
- (unsigned long long)problematicRouteIndexsCount;
- (void)addProblematicRouteIndex:(id)arg1;
- (void)clearProblematicRouteIndexs;
- (id)clientSuggestedRouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientSuggestedRoutesCount;
- (void)addClientSuggestedRoute:(id)arg1;
- (void)clearClientSuggestedRoutes;
@property(nonatomic) _Bool hasProblematicStepIndex;
@property(readonly, nonatomic) _Bool hasOverviewScreenshotImageData;
@property(readonly, nonatomic) _Bool hasDirectionsResponseId;

@end

