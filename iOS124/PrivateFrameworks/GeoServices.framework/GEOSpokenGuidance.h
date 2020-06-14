//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOSpokenGuidance : PBCodable <NSCopying>
{
    int _alignment;
    NSMutableArray *_announcements;
    unsigned int _endDesiredTime;
    unsigned int _exclusiveSetIdentifier;
    unsigned int _numChainedVariants;
    unsigned int _priority;
    unsigned int _repetitionInterval;
    unsigned int _startDesiredTime;
    NSMutableArray *_timeGaps;
    _Bool _tapBeforeAnnouncement;
    struct {
        unsigned int alignment:1;
        unsigned int endDesiredTime:1;
        unsigned int exclusiveSetIdentifier:1;
        unsigned int numChainedVariants:1;
        unsigned int priority:1;
        unsigned int repetitionInterval:1;
        unsigned int startDesiredTime:1;
        unsigned int tapBeforeAnnouncement:1;
    } _has;
}

+ (Class)timeGapType;
+ (Class)announcementType;
@property(nonatomic) unsigned int exclusiveSetIdentifier; // @synthesize exclusiveSetIdentifier=_exclusiveSetIdentifier;
@property(retain, nonatomic) NSMutableArray *timeGaps; // @synthesize timeGaps=_timeGaps;
@property(nonatomic) _Bool tapBeforeAnnouncement; // @synthesize tapBeforeAnnouncement=_tapBeforeAnnouncement;
@property(nonatomic) unsigned int numChainedVariants; // @synthesize numChainedVariants=_numChainedVariants;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned int repetitionInterval; // @synthesize repetitionInterval=_repetitionInterval;
@property(nonatomic) unsigned int endDesiredTime; // @synthesize endDesiredTime=_endDesiredTime;
@property(nonatomic) unsigned int startDesiredTime; // @synthesize startDesiredTime=_startDesiredTime;
@property(retain, nonatomic) NSMutableArray *announcements; // @synthesize announcements=_announcements;
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
@property(nonatomic) _Bool hasExclusiveSetIdentifier;
- (id)timeGapAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeGapsCount;
- (void)addTimeGap:(id)arg1;
- (void)clearTimeGaps;
@property(nonatomic) _Bool hasTapBeforeAnnouncement;
@property(nonatomic) _Bool hasNumChainedVariants;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) _Bool hasRepetitionInterval;
- (int)StringAsAlignment:(id)arg1;
- (id)alignmentAsString:(int)arg1;
@property(nonatomic) _Bool hasAlignment;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool hasEndDesiredTime;
@property(nonatomic) _Bool hasStartDesiredTime;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsCount;
- (void)addAnnouncement:(id)arg1;
- (void)clearAnnouncements;

@end

