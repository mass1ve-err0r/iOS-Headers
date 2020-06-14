//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariTwoFingerTappedOnLinkEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _outcome;
    struct {
        unsigned int timestamp:1;
        unsigned int outcome:1;
    } _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsOutcome:(id)arg1;
- (id)outcomeAsString:(int)arg1;
@property(nonatomic) _Bool hasOutcome;
@property(nonatomic) int outcome; // @synthesize outcome=_outcome;
@property(nonatomic) _Bool hasTimestamp;

@end

