//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABAssignmentResponse, GEOPDPlace, GEOPlace, GEORPCurrentEnvironmentManifestURLs, GEORPMapLocation, GEORPMerchantLookupContext, GEORPNavigationSettings, GEORPPersonalizedMaps, GEORPPlaceInfo, GEORPTransitLineTileInfo, GEOServicesState, NSMutableArray, NSString;

@interface GEORPProblemContext : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionId;
    double _creationDate;
    unsigned long long _originatingAuxiliaryControlIndex;
    NSMutableArray *_autocompleteSuggestionLists;
    NSMutableArray *_auxiliaryControls;
    GEOABAssignmentResponse *_currentAbAssignmentResponse;
    GEORPCurrentEnvironmentManifestURLs *_currentEnvironmentManifestUrls;
    int _deviceGmtOffset;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    NSString *_lastSearchString;
    NSString *_lastUserTypedSearchString;
    GEORPMapLocation *_mapLocation;
    GEORPMerchantLookupContext *_merchantLookupContext;
    GEORPNavigationSettings *_navigationSettings;
    GEOPlace *_originalPlace;
    GEORPPersonalizedMaps *_personalizedMaps;
    int _pinType;
    GEOPDPlace *_place;
    GEORPPlaceInfo *_placeInfo;
    GEOServicesState *_servicesState;
    NSString *_tileStateLog;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    NSMutableArray *_visibleTileSets;
    struct {
        unsigned int sessionId:1;
        unsigned int creationDate:1;
        unsigned int originatingAuxiliaryControlIndex:1;
        unsigned int deviceGmtOffset:1;
        unsigned int pinType:1;
    } _has;
}

+ (Class)directionsWaypointPlaceInfoType;
+ (Class)autocompleteSuggestionListType;
+ (Class)auxiliaryControlType;
+ (Class)directionsResponseType;
+ (Class)directionsRequestType;
+ (Class)visibleTileSetType;
@property(retain, nonatomic) GEORPMerchantLookupContext *merchantLookupContext; // @synthesize merchantLookupContext=_merchantLookupContext;
@property(retain, nonatomic) GEORPNavigationSettings *navigationSettings; // @synthesize navigationSettings=_navigationSettings;
@property(retain, nonatomic) GEORPPersonalizedMaps *personalizedMaps; // @synthesize personalizedMaps=_personalizedMaps;
@property(retain, nonatomic) GEOServicesState *servicesState; // @synthesize servicesState=_servicesState;
@property(retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos; // @synthesize directionsWaypointPlaceInfos=_directionsWaypointPlaceInfos;
@property(retain, nonatomic) GEORPCurrentEnvironmentManifestURLs *currentEnvironmentManifestUrls; // @synthesize currentEnvironmentManifestUrls=_currentEnvironmentManifestUrls;
@property(retain, nonatomic) NSMutableArray *autocompleteSuggestionLists; // @synthesize autocompleteSuggestionLists=_autocompleteSuggestionLists;
@property(retain, nonatomic) GEOABAssignmentResponse *currentAbAssignmentResponse; // @synthesize currentAbAssignmentResponse=_currentAbAssignmentResponse;
@property(nonatomic) int deviceGmtOffset; // @synthesize deviceGmtOffset=_deviceGmtOffset;
@property(retain, nonatomic) NSString *lastUserTypedSearchString; // @synthesize lastUserTypedSearchString=_lastUserTypedSearchString;
@property(retain, nonatomic) GEORPPlaceInfo *placeInfo; // @synthesize placeInfo=_placeInfo;
@property(retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo; // @synthesize transitLineTileInfo=_transitLineTileInfo;
@property(nonatomic) unsigned long long originatingAuxiliaryControlIndex; // @synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex;
@property(retain, nonatomic) NSMutableArray *auxiliaryControls; // @synthesize auxiliaryControls=_auxiliaryControls;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *lastSearchString; // @synthesize lastSearchString=_lastSearchString;
@property(retain, nonatomic) NSMutableArray *directionsResponses; // @synthesize directionsResponses=_directionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsRequests; // @synthesize directionsRequests=_directionsRequests;
@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) NSString *tileStateLog; // @synthesize tileStateLog=_tileStateLog;
@property(retain, nonatomic) NSMutableArray *visibleTileSets; // @synthesize visibleTileSets=_visibleTileSets;
@property(retain, nonatomic) GEORPMapLocation *mapLocation; // @synthesize mapLocation=_mapLocation;
@property(retain, nonatomic) GEOPlace *originalPlace; // @synthesize originalPlace=_originalPlace;
@property(nonatomic) struct GEOSessionID sessionId; // @synthesize sessionId=_sessionId;
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
@property(readonly, nonatomic) _Bool hasMerchantLookupContext;
@property(readonly, nonatomic) _Bool hasNavigationSettings;
@property(readonly, nonatomic) _Bool hasPersonalizedMaps;
@property(readonly, nonatomic) _Bool hasServicesState;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (void)addDirectionsWaypointPlaceInfo:(id)arg1;
- (void)clearDirectionsWaypointPlaceInfos;
@property(readonly, nonatomic) _Bool hasCurrentEnvironmentManifestUrls;
- (id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1;
- (unsigned long long)autocompleteSuggestionListsCount;
- (void)addAutocompleteSuggestionList:(id)arg1;
- (void)clearAutocompleteSuggestionLists;
@property(readonly, nonatomic) _Bool hasCurrentAbAssignmentResponse;
@property(nonatomic) _Bool hasDeviceGmtOffset;
@property(readonly, nonatomic) _Bool hasLastUserTypedSearchString;
@property(readonly, nonatomic) _Bool hasPlaceInfo;
@property(readonly, nonatomic) _Bool hasTransitLineTileInfo;
@property(nonatomic) _Bool hasOriginatingAuxiliaryControlIndex;
- (id)auxiliaryControlAtIndex:(unsigned long long)arg1;
- (unsigned long long)auxiliaryControlsCount;
- (void)addAuxiliaryControl:(id)arg1;
- (void)clearAuxiliaryControls;
@property(nonatomic) _Bool hasCreationDate;
@property(readonly, nonatomic) _Bool hasLastSearchString;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)addDirectionsResponse:(id)arg1;
- (void)clearDirectionsResponses;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)addDirectionsRequest:(id)arg1;
- (void)clearDirectionsRequests;
@property(readonly, nonatomic) _Bool hasPlace;
@property(readonly, nonatomic) _Bool hasTileStateLog;
- (id)visibleTileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleTileSetsCount;
- (void)addVisibleTileSet:(id)arg1;
- (void)clearVisibleTileSets;
@property(readonly, nonatomic) _Bool hasMapLocation;
@property(readonly, nonatomic) _Bool hasOriginalPlace;
- (int)StringAsPinType:(id)arg1;
- (id)pinTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPinType;
@property(nonatomic) int pinType; // @synthesize pinType=_pinType;
@property(nonatomic) _Bool hasSessionId;

@end

