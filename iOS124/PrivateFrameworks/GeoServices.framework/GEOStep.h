//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOInstructionSet, GEONameInfo, GEOTimeCheckpoints, NSMutableArray, NSString;

@interface GEOStep : PBCodable <NSCopying>
{
    struct GEOJunctionElement *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    unsigned int _distance;
    GEONameInfo *_exitNumber;
    unsigned int _expectedTime;
    NSMutableArray *_guidanceEvents;
    int _hintFirstAnnouncementZilchIndex;
    GEOInstructionSet *_instructionSet;
    NSString *_instructions;
    int _junctionType;
    int _maneuverEndBasicIndex;
    int _maneuverEndZilchIndex;
    NSMutableArray *_maneuverNames;
    int _maneuverStartZilchIndex;
    int _maneuverType;
    NSString *_notice;
    int _overrideDrivingSide;
    int _overrideTransportType;
    NSMutableArray *_signposts;
    unsigned int _stepID;
    GEOTimeCheckpoints *_timeCheckpoints;
    _Bool _endsOnFwy;
    _Bool _maneuverLaneGuidanceSuppressed;
    _Bool _shouldChainManeuver;
    _Bool _stayOn;
    _Bool _toFreeway;
    _Bool _tollAhead;
    _Bool _tollPrior;
    struct {
        unsigned int distance:1;
        unsigned int expectedTime:1;
        unsigned int hintFirstAnnouncementZilchIndex:1;
        unsigned int junctionType:1;
        unsigned int maneuverEndBasicIndex:1;
        unsigned int maneuverEndZilchIndex:1;
        unsigned int maneuverStartZilchIndex:1;
        unsigned int maneuverType:1;
        unsigned int overrideDrivingSide:1;
        unsigned int overrideTransportType:1;
        unsigned int stepID:1;
        unsigned int endsOnFwy:1;
        unsigned int maneuverLaneGuidanceSuppressed:1;
        unsigned int shouldChainManeuver:1;
        unsigned int stayOn:1;
        unsigned int toFreeway:1;
        unsigned int tollAhead:1;
        unsigned int tollPrior:1;
    } _has;
}

+ (Class)guidanceEventType;
+ (Class)signpostType;
+ (Class)maneuverNameType;
@property(retain, nonatomic) NSMutableArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
@property(nonatomic) _Bool shouldChainManeuver; // @synthesize shouldChainManeuver=_shouldChainManeuver;
@property(retain, nonatomic) GEOInstructionSet *instructionSet; // @synthesize instructionSet=_instructionSet;
@property(retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints; // @synthesize timeCheckpoints=_timeCheckpoints;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) GEONameInfo *exitNumber; // @synthesize exitNumber=_exitNumber;
@property(retain, nonatomic) NSMutableArray *signposts; // @synthesize signposts=_signposts;
@property(retain, nonatomic) NSMutableArray *maneuverNames; // @synthesize maneuverNames=_maneuverNames;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int distance; // @synthesize distance=_distance;
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
@property(nonatomic) _Bool hasManeuverLaneGuidanceSuppressed;
@property(nonatomic) _Bool maneuverLaneGuidanceSuppressed; // @synthesize maneuverLaneGuidanceSuppressed=_maneuverLaneGuidanceSuppressed;
@property(nonatomic) _Bool hasStayOn;
@property(nonatomic) _Bool stayOn; // @synthesize stayOn=_stayOn;
- (id)guidanceEventAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidanceEventsCount;
- (void)addGuidanceEvent:(id)arg1;
- (void)clearGuidanceEvents;
@property(nonatomic) _Bool hasShouldChainManeuver;
@property(readonly, nonatomic) _Bool hasInstructionSet;
@property(readonly, nonatomic) _Bool hasTimeCheckpoints;
@property(readonly, nonatomic) _Bool hasNotice;
@property(readonly, nonatomic) _Bool hasInstructions;
@property(nonatomic) _Bool hasToFreeway;
@property(nonatomic) _Bool toFreeway; // @synthesize toFreeway=_toFreeway;
@property(nonatomic) _Bool hasEndsOnFwy;
@property(nonatomic) _Bool endsOnFwy; // @synthesize endsOnFwy=_endsOnFwy;
@property(nonatomic) _Bool hasTollAhead;
@property(nonatomic) _Bool tollAhead; // @synthesize tollAhead=_tollAhead;
@property(nonatomic) _Bool hasTollPrior;
@property(nonatomic) _Bool tollPrior; // @synthesize tollPrior=_tollPrior;
@property(readonly, nonatomic) _Bool hasExitNumber;
- (int)StringAsOverrideDrivingSide:(id)arg1;
- (id)overrideDrivingSideAsString:(int)arg1;
@property(nonatomic) _Bool hasOverrideDrivingSide;
@property(nonatomic) int overrideDrivingSide; // @synthesize overrideDrivingSide=_overrideDrivingSide;
- (int)StringAsOverrideTransportType:(id)arg1;
- (id)overrideTransportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasOverrideTransportType;
@property(nonatomic) int overrideTransportType; // @synthesize overrideTransportType=_overrideTransportType;
@property(nonatomic) _Bool hasHintFirstAnnouncementZilchIndex;
@property(nonatomic) int hintFirstAnnouncementZilchIndex; // @synthesize hintFirstAnnouncementZilchIndex=_hintFirstAnnouncementZilchIndex;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;
- (void)clearJunctionElements;
@property(readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property(readonly, nonatomic) unsigned long long junctionElementsCount;
- (int)StringAsJunctionType:(id)arg1;
- (id)junctionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasJunctionType;
@property(nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (void)addManeuverName:(id)arg1;
- (void)clearManeuverNames;
- (int)StringAsManeuverType:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property(nonatomic) _Bool hasExpectedTime;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) _Bool hasManeuverEndZilchIndex;
@property(nonatomic) int maneuverEndZilchIndex; // @synthesize maneuverEndZilchIndex=_maneuverEndZilchIndex;
@property(nonatomic) _Bool hasManeuverStartZilchIndex;
@property(nonatomic) int maneuverStartZilchIndex; // @synthesize maneuverStartZilchIndex=_maneuverStartZilchIndex;
@property(nonatomic) _Bool hasManeuverEndBasicIndex;
@property(nonatomic) int maneuverEndBasicIndex; // @synthesize maneuverEndBasicIndex=_maneuverEndBasicIndex;
@property(nonatomic) _Bool hasStepID;
- (void)dealloc;
- (id)executionInstructionsForSpoken;
- (id)prepareInstructionForSpoken;
- (id)initialInstructionForSpoken;
- (id)continueInstructionForSpoken;
- (id)proceedInstructionForSpoken;
- (id)normalInstructionsForSignView;
- (id)continueInstructionsForSignView;
- (id)mergeInstructionsForSignView;
- (id)distanceForSignView;
- (id)instructionsForListView;
- (id)distanceForListView;
- (id)maneuverDescription;
- (_Bool)maneuverIsHighwayExit;
- (void)shieldInfo:(CDUnknownBlockType)arg1;
- (id)intersectionNameInfo;
- (id)firstNameInfo;
@property(readonly, nonatomic) int hintFirstAnnouncementIndex;
@property(readonly, nonatomic) _Bool hasHintFirstAnnouncementIndex;
@property(readonly, nonatomic) unsigned int maneuverStartIndex;
@property(readonly, nonatomic) unsigned int maneuverEndIndex;
- (id)roadName;

@end

