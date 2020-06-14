//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AirPlaySupport/NSCopying-Protocol.h>

@class NSString;

@interface APSAWDAirPlayAudioSessionEndedOnServer : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _bigLosses;
    unsigned int _compressionPercent;
    unsigned int _dacpNext;
    unsigned int _dacpPauses;
    unsigned int _dacpPrevious;
    unsigned int _duration;
    unsigned int _futileRetransmits;
    unsigned int _glitches;
    unsigned int _lastPackets;
    unsigned int _lostPackets;
    unsigned int _maxBurstLoss;
    unsigned int _ntpOffsetAvg;
    unsigned int _ntpOffsetMax;
    unsigned int _ntpOffsetMin;
    unsigned int _ntpOutliers;
    unsigned int _ntpRTTAvg;
    unsigned int _ntpRTTMax;
    unsigned int _ntpRTTMin;
    unsigned int _ntpSteps;
    int _reason;
    unsigned int _retransmitAvgMs;
    unsigned int _retransmitMaxMs;
    unsigned int _retransmitMinMs;
    unsigned int _retransmitNotFounds;
    unsigned int _retransmitReceives;
    unsigned int _retransmitRetryMaxMs;
    unsigned int _retransmitRetryMinMs;
    unsigned int _retransmitSends;
    unsigned int _rtpMaxSkew;
    unsigned int _rtpSkewResets;
    NSString *_sessionUUID;
    unsigned int _unrecoveredPackets;
    struct {
        unsigned int timestamp:1;
        unsigned int bigLosses:1;
        unsigned int compressionPercent:1;
        unsigned int dacpNext:1;
        unsigned int dacpPauses:1;
        unsigned int dacpPrevious:1;
        unsigned int duration:1;
        unsigned int futileRetransmits:1;
        unsigned int glitches:1;
        unsigned int lastPackets:1;
        unsigned int lostPackets:1;
        unsigned int maxBurstLoss:1;
        unsigned int ntpOffsetAvg:1;
        unsigned int ntpOffsetMax:1;
        unsigned int ntpOffsetMin:1;
        unsigned int ntpOutliers:1;
        unsigned int ntpRTTAvg:1;
        unsigned int ntpRTTMax:1;
        unsigned int ntpRTTMin:1;
        unsigned int ntpSteps:1;
        unsigned int reason:1;
        unsigned int retransmitAvgMs:1;
        unsigned int retransmitMaxMs:1;
        unsigned int retransmitMinMs:1;
        unsigned int retransmitNotFounds:1;
        unsigned int retransmitReceives:1;
        unsigned int retransmitRetryMaxMs:1;
        unsigned int retransmitRetryMinMs:1;
        unsigned int retransmitSends:1;
        unsigned int rtpMaxSkew:1;
        unsigned int rtpSkewResets:1;
        unsigned int unrecoveredPackets:1;
    } _has;
}

@property(nonatomic) unsigned int dacpPrevious; // @synthesize dacpPrevious=_dacpPrevious;
@property(nonatomic) unsigned int dacpNext; // @synthesize dacpNext=_dacpNext;
@property(nonatomic) unsigned int dacpPauses; // @synthesize dacpPauses=_dacpPauses;
@property(nonatomic) unsigned int rtpSkewResets; // @synthesize rtpSkewResets=_rtpSkewResets;
@property(nonatomic) unsigned int rtpMaxSkew; // @synthesize rtpMaxSkew=_rtpMaxSkew;
@property(nonatomic) unsigned int ntpSteps; // @synthesize ntpSteps=_ntpSteps;
@property(nonatomic) unsigned int ntpOutliers; // @synthesize ntpOutliers=_ntpOutliers;
@property(nonatomic) unsigned int ntpOffsetAvg; // @synthesize ntpOffsetAvg=_ntpOffsetAvg;
@property(nonatomic) unsigned int ntpOffsetMax; // @synthesize ntpOffsetMax=_ntpOffsetMax;
@property(nonatomic) unsigned int ntpOffsetMin; // @synthesize ntpOffsetMin=_ntpOffsetMin;
@property(nonatomic) unsigned int ntpRTTAvg; // @synthesize ntpRTTAvg=_ntpRTTAvg;
@property(nonatomic) unsigned int ntpRTTMax; // @synthesize ntpRTTMax=_ntpRTTMax;
@property(nonatomic) unsigned int ntpRTTMin; // @synthesize ntpRTTMin=_ntpRTTMin;
@property(nonatomic) unsigned int bigLosses; // @synthesize bigLosses=_bigLosses;
@property(nonatomic) unsigned int maxBurstLoss; // @synthesize maxBurstLoss=_maxBurstLoss;
@property(nonatomic) unsigned int lastPackets; // @synthesize lastPackets=_lastPackets;
@property(nonatomic) unsigned int unrecoveredPackets; // @synthesize unrecoveredPackets=_unrecoveredPackets;
@property(nonatomic) unsigned int lostPackets; // @synthesize lostPackets=_lostPackets;
@property(nonatomic) unsigned int retransmitRetryMaxMs; // @synthesize retransmitRetryMaxMs=_retransmitRetryMaxMs;
@property(nonatomic) unsigned int retransmitRetryMinMs; // @synthesize retransmitRetryMinMs=_retransmitRetryMinMs;
@property(nonatomic) unsigned int retransmitAvgMs; // @synthesize retransmitAvgMs=_retransmitAvgMs;
@property(nonatomic) unsigned int retransmitMaxMs; // @synthesize retransmitMaxMs=_retransmitMaxMs;
@property(nonatomic) unsigned int retransmitMinMs; // @synthesize retransmitMinMs=_retransmitMinMs;
@property(nonatomic) unsigned int retransmitNotFounds; // @synthesize retransmitNotFounds=_retransmitNotFounds;
@property(nonatomic) unsigned int futileRetransmits; // @synthesize futileRetransmits=_futileRetransmits;
@property(nonatomic) unsigned int retransmitReceives; // @synthesize retransmitReceives=_retransmitReceives;
@property(nonatomic) unsigned int retransmitSends; // @synthesize retransmitSends=_retransmitSends;
@property(nonatomic) unsigned int glitches; // @synthesize glitches=_glitches;
@property(nonatomic) unsigned int compressionPercent; // @synthesize compressionPercent=_compressionPercent;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDacpPrevious;
@property(nonatomic) _Bool hasDacpNext;
@property(nonatomic) _Bool hasDacpPauses;
@property(nonatomic) _Bool hasRtpSkewResets;
@property(nonatomic) _Bool hasRtpMaxSkew;
@property(nonatomic) _Bool hasNtpSteps;
@property(nonatomic) _Bool hasNtpOutliers;
@property(nonatomic) _Bool hasNtpOffsetAvg;
@property(nonatomic) _Bool hasNtpOffsetMax;
@property(nonatomic) _Bool hasNtpOffsetMin;
@property(nonatomic) _Bool hasNtpRTTAvg;
@property(nonatomic) _Bool hasNtpRTTMax;
@property(nonatomic) _Bool hasNtpRTTMin;
@property(nonatomic) _Bool hasBigLosses;
@property(nonatomic) _Bool hasMaxBurstLoss;
@property(nonatomic) _Bool hasLastPackets;
@property(nonatomic) _Bool hasUnrecoveredPackets;
@property(nonatomic) _Bool hasLostPackets;
@property(nonatomic) _Bool hasRetransmitRetryMaxMs;
@property(nonatomic) _Bool hasRetransmitRetryMinMs;
@property(nonatomic) _Bool hasRetransmitAvgMs;
@property(nonatomic) _Bool hasRetransmitMaxMs;
@property(nonatomic) _Bool hasRetransmitMinMs;
@property(nonatomic) _Bool hasRetransmitNotFounds;
@property(nonatomic) _Bool hasFutileRetransmits;
@property(nonatomic) _Bool hasRetransmitReceives;
@property(nonatomic) _Bool hasRetransmitSends;
@property(nonatomic) _Bool hasGlitches;
@property(nonatomic) _Bool hasCompressionPercent;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasReason;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasSessionUUID;
- (void)dealloc;

@end

