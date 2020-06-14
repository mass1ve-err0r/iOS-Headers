//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOLocation, NSArray, NSData;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _selectedRideIndexs;
    double _timestamp;
    unsigned int _distanceRemainingOnRoute;
    unsigned int _distanceToManeuver;
    unsigned int _distanceToRoute;
    int _feedbackType;
    int _hapticsType;
    GEOLocation *_location;
    unsigned int _remainingTime;
    NSData *_routeID;
    unsigned int _routeLocationIndex;
    float _routeLocationOffset;
    GEOLatLng *_routeMatchCoordinate;
    unsigned int _stepID;
    _Bool _guidancePromptsEnabled;
    _Bool _isConnectedToCarplay;
    _Bool _lowGuidanceNavigation;
    struct {
        unsigned int timestamp:1;
        unsigned int distanceRemainingOnRoute:1;
        unsigned int distanceToManeuver:1;
        unsigned int distanceToRoute:1;
        unsigned int feedbackType:1;
        unsigned int hapticsType:1;
        unsigned int remainingTime:1;
        unsigned int routeLocationIndex:1;
        unsigned int routeLocationOffset:1;
        unsigned int stepID:1;
        unsigned int guidancePromptsEnabled:1;
        unsigned int isConnectedToCarplay:1;
        unsigned int lowGuidanceNavigation:1;
    } _has;
}

@property(nonatomic) _Bool isConnectedToCarplay; // @synthesize isConnectedToCarplay=_isConnectedToCarplay;
@property(nonatomic) _Bool lowGuidanceNavigation; // @synthesize lowGuidanceNavigation=_lowGuidanceNavigation;
@property(nonatomic) _Bool guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(retain, nonatomic) GEOLatLng *routeMatchCoordinate; // @synthesize routeMatchCoordinate=_routeMatchCoordinate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float routeLocationOffset; // @synthesize routeLocationOffset=_routeLocationOffset;
@property(nonatomic) unsigned int routeLocationIndex; // @synthesize routeLocationIndex=_routeLocationIndex;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned int remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) unsigned int distanceRemainingOnRoute; // @synthesize distanceRemainingOnRoute=_distanceRemainingOnRoute;
@property(nonatomic) unsigned int distanceToRoute; // @synthesize distanceToRoute=_distanceToRoute;
@property(nonatomic) unsigned int distanceToManeuver; // @synthesize distanceToManeuver=_distanceToManeuver;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
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
@property(nonatomic) _Bool hasIsConnectedToCarplay;
- (int)StringAsHapticsType:(id)arg1;
- (id)hapticsTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasHapticsType;
@property(nonatomic) int hapticsType; // @synthesize hapticsType=_hapticsType;
@property(nonatomic) _Bool hasLowGuidanceNavigation;
- (void)setSelectedRideIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)selectedRideIndexAtIndex:(unsigned long long)arg1;
- (void)addSelectedRideIndex:(unsigned int)arg1;
- (void)clearSelectedRideIndexs;
@property(readonly, nonatomic) unsigned int *selectedRideIndexs;
@property(readonly, nonatomic) unsigned long long selectedRideIndexsCount;
@property(nonatomic) _Bool hasGuidancePromptsEnabled;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(readonly, nonatomic) _Bool hasRouteMatchCoordinate;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasRouteLocationOffset;
@property(nonatomic) _Bool hasRouteLocationIndex;
@property(readonly, nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasRemainingTime;
@property(nonatomic) _Bool hasDistanceRemainingOnRoute;
@property(nonatomic) _Bool hasDistanceToRoute;
@property(nonatomic) _Bool hasDistanceToManeuver;
@property(nonatomic) _Bool hasStepID;
- (int)StringAsFeedbackType:(id)arg1;
- (id)feedbackTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedbackType;
@property(nonatomic) int feedbackType; // @synthesize feedbackType=_feedbackType;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *selectedRideIndices;
@property(readonly, nonatomic) unsigned int effectiveDistanceToManeuver;
@property(readonly, nonatomic) _Bool hasEffectiveDistanceToManeuver;
- (unsigned int)effectiveStepIDInRoute:(id)arg1;
@property(readonly, nonatomic) unsigned int effectiveStepID;
@property(readonly, nonatomic) _Bool hasEffectiveStepID;
@property(readonly, nonatomic) _Bool isRecalculating;
@property(readonly, nonatomic) _Bool isNavigating;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(_Bool)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1;
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRouteID:(id)arg1;

@end

