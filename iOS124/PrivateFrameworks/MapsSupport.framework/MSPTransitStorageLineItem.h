//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitLineItem-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class GEOMapItemIdentifier, GEOMapRegion, MSPTransitStorageAttribution, MSPTransitStorageLine, NSArray, NSMutableArray, NSString, PBUnknownFields;
@protocol GEOEncyclopedicInfo, GEOTransitArtworkDataSource, GEOTransitAttribution, GEOTransitSystem;

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_incidents;
    MSPTransitStorageLine *_line;
    GEOMapRegion *_storedMapRegion;
    MSPTransitStorageAttribution *_transitAttribution;
}

+ (Class)incidentsType;
@property(retain, nonatomic) NSMutableArray *incidents; // @synthesize incidents=_incidents;
@property(retain, nonatomic) MSPTransitStorageAttribution *transitAttribution; // @synthesize transitAttribution=_transitAttribution;
@property(retain, nonatomic) GEOMapRegion *storedMapRegion; // @synthesize storedMapRegion=_storedMapRegion;
@property(retain, nonatomic) MSPTransitStorageLine *line; // @synthesize line=_line;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (void)addIncidents:(id)arg1;
- (void)clearIncidents;
@property(readonly, nonatomic) _Bool hasTransitAttribution;
@property(readonly, nonatomic) _Bool hasStoredMapRegion;
@property(readonly, nonatomic) _Bool hasLine;
@property(readonly, nonatomic) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic) _Bool hasEncyclopedicInfo;
@property(readonly, nonatomic) _Bool hasIncidentComponent;
@property(readonly, nonatomic) _Bool isIncidentsTTLExpired;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) id <GEOTransitAttribution> attribution;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSArray *operatingHours;
@property(readonly, nonatomic) _Bool showVehicleNumber;
@property(readonly, nonatomic) NSString *lineColorString;
@property(readonly, nonatomic) _Bool hasLineColorString;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> alternateArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> modeArtwork;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork;
@property(readonly, nonatomic) _Bool departuresAreVehicleSpecific;
@property(readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property(readonly, nonatomic) id <GEOTransitSystem> system;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic) unsigned long long muid;
- (id)initWithLineItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

