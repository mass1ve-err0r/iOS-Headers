//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitMessageLocation, NSMutableArray;

@interface AWDHomeKitMessageHomeLocationReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    AWDHomeKitMessageLocation *_nearestLOI;
    unsigned int _numIterationToConverge;
    NSMutableArray *_rawLocations;
    AWDHomeKitMessageLocation *_selectedHomeLocation;
    struct {
        unsigned int timestamp:1;
        unsigned int numIterationToConverge:1;
    } _has;
}

+ (Class)rawLocationsType;
@property(retain, nonatomic) AWDHomeKitMessageLocation *nearestLOI; // @synthesize nearestLOI=_nearestLOI;
@property(nonatomic) unsigned int numIterationToConverge; // @synthesize numIterationToConverge=_numIterationToConverge;
@property(retain, nonatomic) AWDHomeKitMessageLocation *selectedHomeLocation; // @synthesize selectedHomeLocation=_selectedHomeLocation;
@property(retain, nonatomic) NSMutableArray *rawLocations; // @synthesize rawLocations=_rawLocations;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) _Bool hasNearestLOI;
@property(nonatomic) _Bool hasNumIterationToConverge;
@property(readonly, nonatomic) _Bool hasSelectedHomeLocation;
- (id)rawLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rawLocationsCount;
- (void)addRawLocations:(id)arg1;
- (void)clearRawLocations;
@property(nonatomic) _Bool hasTimestamp;

@end

