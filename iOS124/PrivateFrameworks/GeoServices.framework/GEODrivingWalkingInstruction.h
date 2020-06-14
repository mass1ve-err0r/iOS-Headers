//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODrivingWalkingInstruction : PBCodable <NSCopying>
{
    NSMutableArray *_continueCommands;
    GEOFormattedString *_distance;
    NSMutableArray *_mergeCommands;
    NSMutableArray *_normalCommands;
}

+ (Class)mergeCommandType;
+ (Class)continueCommandType;
+ (Class)normalCommandType;
@property(retain, nonatomic) NSMutableArray *mergeCommands; // @synthesize mergeCommands=_mergeCommands;
@property(retain, nonatomic) NSMutableArray *continueCommands; // @synthesize continueCommands=_continueCommands;
@property(retain, nonatomic) NSMutableArray *normalCommands; // @synthesize normalCommands=_normalCommands;
@property(retain, nonatomic) GEOFormattedString *distance; // @synthesize distance=_distance;
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
- (id)mergeCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)mergeCommandsCount;
- (void)addMergeCommand:(id)arg1;
- (void)clearMergeCommands;
- (id)continueCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)continueCommandsCount;
- (void)addContinueCommand:(id)arg1;
- (void)clearContinueCommands;
- (id)normalCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)normalCommandsCount;
- (void)addNormalCommand:(id)arg1;
- (void)clearNormalCommands;
@property(readonly, nonatomic) _Bool hasDistance;

@end

