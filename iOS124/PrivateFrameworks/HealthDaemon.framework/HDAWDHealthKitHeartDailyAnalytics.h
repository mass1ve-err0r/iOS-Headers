//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitHeartDailyAnalytics : PBCodable <NSCopying>
{
    long long _ecgCount;
    long long _irregularRhythmNotificationCount;
    unsigned long long _timestamp;
    long long _weeksSinceEcgOnboarded;
    unsigned int _atrialFibrillationHeartRate50To120;
    unsigned int _heartRateAbove120;
    unsigned int _heartRateBelow50;
    unsigned int _inconclusiveOther;
    unsigned int _inconclusivePoorReading;
    unsigned int _notSet;
    unsigned int _sinusRhythmHeartRate50To100;
    unsigned int _unknown;
    _Bool _isEcgOnboarded;
    _Bool _isImproveHealthAndActivityAllowed;
    struct {
        unsigned int ecgCount:1;
        unsigned int irregularRhythmNotificationCount:1;
        unsigned int timestamp:1;
        unsigned int weeksSinceEcgOnboarded:1;
        unsigned int atrialFibrillationHeartRate50To120:1;
        unsigned int heartRateAbove120:1;
        unsigned int heartRateBelow50:1;
        unsigned int inconclusiveOther:1;
        unsigned int inconclusivePoorReading:1;
        unsigned int notSet:1;
        unsigned int sinusRhythmHeartRate50To100:1;
        unsigned int unknown:1;
        unsigned int isEcgOnboarded:1;
        unsigned int isImproveHealthAndActivityAllowed:1;
    } _has;
}

@property(nonatomic) _Bool isEcgOnboarded; // @synthesize isEcgOnboarded=_isEcgOnboarded;
@property(nonatomic) _Bool isImproveHealthAndActivityAllowed; // @synthesize isImproveHealthAndActivityAllowed=_isImproveHealthAndActivityAllowed;
@property(nonatomic) unsigned int unknown; // @synthesize unknown=_unknown;
@property(nonatomic) unsigned int heartRateBelow50; // @synthesize heartRateBelow50=_heartRateBelow50;
@property(nonatomic) unsigned int heartRateAbove120; // @synthesize heartRateAbove120=_heartRateAbove120;
@property(nonatomic) unsigned int atrialFibrillationHeartRate50To120; // @synthesize atrialFibrillationHeartRate50To120=_atrialFibrillationHeartRate50To120;
@property(nonatomic) unsigned int sinusRhythmHeartRate50To100; // @synthesize sinusRhythmHeartRate50To100=_sinusRhythmHeartRate50To100;
@property(nonatomic) unsigned int inconclusiveOther; // @synthesize inconclusiveOther=_inconclusiveOther;
@property(nonatomic) unsigned int inconclusivePoorReading; // @synthesize inconclusivePoorReading=_inconclusivePoorReading;
@property(nonatomic) unsigned int notSet; // @synthesize notSet=_notSet;
@property(nonatomic) long long weeksSinceEcgOnboarded; // @synthesize weeksSinceEcgOnboarded=_weeksSinceEcgOnboarded;
@property(nonatomic) long long irregularRhythmNotificationCount; // @synthesize irregularRhythmNotificationCount=_irregularRhythmNotificationCount;
@property(nonatomic) long long ecgCount; // @synthesize ecgCount=_ecgCount;
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
@property(nonatomic) _Bool hasIsEcgOnboarded;
@property(nonatomic) _Bool hasIsImproveHealthAndActivityAllowed;
@property(nonatomic) _Bool hasUnknown;
@property(nonatomic) _Bool hasHeartRateBelow50;
@property(nonatomic) _Bool hasHeartRateAbove120;
@property(nonatomic) _Bool hasAtrialFibrillationHeartRate50To120;
@property(nonatomic) _Bool hasSinusRhythmHeartRate50To100;
@property(nonatomic) _Bool hasInconclusiveOther;
@property(nonatomic) _Bool hasInconclusivePoorReading;
@property(nonatomic) _Bool hasNotSet;
@property(nonatomic) _Bool hasWeeksSinceEcgOnboarded;
@property(nonatomic) _Bool hasIrregularRhythmNotificationCount;
@property(nonatomic) _Bool hasEcgCount;
@property(nonatomic) _Bool hasTimestamp;

@end

