//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventGridDuration : PBCodable <NSCopying>
{
    int _displayType;
    unsigned int _durationMs;
    int _endState;
    NSMutableArray *_endStateErrorReasons;
    int _previousState;
    struct {
        unsigned int displayType:1;
        unsigned int durationMs:1;
        unsigned int endState:1;
        unsigned int previousState:1;
    } _has;
}

+ (Class)endStateErrorReasonType;
@property(retain, nonatomic) NSMutableArray *endStateErrorReasons; // @synthesize endStateErrorReasons=_endStateErrorReasons;
@property(nonatomic) unsigned int durationMs; // @synthesize durationMs=_durationMs;
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
- (int)StringAsDisplayType:(id)arg1;
- (id)displayTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDisplayType;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
- (int)StringAsPreviousState:(id)arg1;
- (id)previousStateAsString:(int)arg1;
@property(nonatomic) _Bool hasPreviousState;
@property(nonatomic) int previousState; // @synthesize previousState=_previousState;
- (id)endStateErrorReasonAtIndex:(unsigned long long)arg1;
- (unsigned long long)endStateErrorReasonsCount;
- (void)addEndStateErrorReason:(id)arg1;
- (void)clearEndStateErrorReasons;
- (int)StringAsEndState:(id)arg1;
- (id)endStateAsString:(int)arg1;
@property(nonatomic) _Bool hasEndState;
@property(nonatomic) int endState; // @synthesize endState=_endState;
@property(nonatomic) _Bool hasDurationMs;

@end

