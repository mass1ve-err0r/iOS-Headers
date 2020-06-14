//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionManeuverStep-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOCompanionWalkStep : PBCodable <GEOCompanionManeuverStep, NSCopying>
{
    struct GEOJunctionElement *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    int _junctionType;
    NSMutableArray *_maneuverNames;
    int _maneuverType;
    NSMutableArray *_signposts;
    CDStruct_efbf2325 _has;
}

+ (Class)signpostType;
+ (Class)maneuverNameType;
@property(retain, nonatomic) NSMutableArray *signposts; // @synthesize signposts=_signposts;
@property(retain, nonatomic) NSMutableArray *maneuverNames; // @synthesize maneuverNames=_maneuverNames;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
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
- (id)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (void)addManeuverName:(id)arg1;
- (void)clearManeuverNames;
- (int)StringAsManeuverType:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasManeuverType;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
- (void)dealloc;
@property(readonly, nonatomic) int transportType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

