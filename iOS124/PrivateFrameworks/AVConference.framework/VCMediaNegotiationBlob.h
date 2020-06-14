//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray, NSString, VCMediaNegotiationBlobAudioSettings, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlob : PBCodable <NSCopying>
{
    unsigned long long _ntpTime;
    VCMediaNegotiationBlobAudioSettings *_audioSettings;
    NSMutableArray *_bandwidthSettings;
    NSString *_basebandCodec;
    unsigned int _basebandCodecSampleRate;
    unsigned int _blobVersion;
    VCMediaNegotiationBlobCaptionsSettings *_captionsSettings;
    VCMediaNegotiationBlobMomentsSettings *_momentsSettings;
    NSMutableArray *_multiwayAudioStreams;
    NSMutableArray *_multiwayVideoStreams;
    VCMediaNegotiationBlobVideoSettings *_screenSettings;
    NSString *_userAgent;
    VCMediaNegotiationBlobVideoSettings *_videoSettings;
    _Bool _allowDynamicMaxBitrate;
    _Bool _allowsContentsChangeWithAspectPreservation;
    struct {
        unsigned int ntpTime:1;
        unsigned int basebandCodecSampleRate:1;
        unsigned int blobVersion:1;
        unsigned int allowDynamicMaxBitrate:1;
        unsigned int allowsContentsChangeWithAspectPreservation:1;
    } _has;
}

+ (Class)multiwayVideoStreamType;
+ (Class)multiwayAudioStreamsType;
+ (Class)bandwidthSettingsType;
@property(retain, nonatomic) NSMutableArray *multiwayVideoStreams; // @synthesize multiwayVideoStreams=_multiwayVideoStreams;
@property(nonatomic) unsigned int blobVersion; // @synthesize blobVersion=_blobVersion;
@property(nonatomic) unsigned long long ntpTime; // @synthesize ntpTime=_ntpTime;
@property(retain, nonatomic) VCMediaNegotiationBlobMomentsSettings *momentsSettings; // @synthesize momentsSettings=_momentsSettings;
@property(retain, nonatomic) NSMutableArray *multiwayAudioStreams; // @synthesize multiwayAudioStreams=_multiwayAudioStreams;
@property(retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings; // @synthesize captionsSettings=_captionsSettings;
@property(retain, nonatomic) NSMutableArray *bandwidthSettings; // @synthesize bandwidthSettings=_bandwidthSettings;
@property(nonatomic) unsigned int basebandCodecSampleRate; // @synthesize basebandCodecSampleRate=_basebandCodecSampleRate;
@property(retain, nonatomic) NSString *basebandCodec; // @synthesize basebandCodec=_basebandCodec;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings; // @synthesize screenSettings=_screenSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings; // @synthesize videoSettings=_videoSettings;
@property(retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings; // @synthesize audioSettings=_audioSettings;
@property(nonatomic) _Bool allowsContentsChangeWithAspectPreservation; // @synthesize allowsContentsChangeWithAspectPreservation=_allowsContentsChangeWithAspectPreservation;
@property(nonatomic) _Bool allowDynamicMaxBitrate; // @synthesize allowDynamicMaxBitrate=_allowDynamicMaxBitrate;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)multiwayVideoStreamAtIndex:(unsigned long long)arg1;
- (unsigned long long)multiwayVideoStreamsCount;
- (void)addMultiwayVideoStream:(id)arg1;
- (void)clearMultiwayVideoStreams;
@property(nonatomic) _Bool hasBlobVersion;
@property(nonatomic) _Bool hasNtpTime;
@property(readonly, nonatomic) _Bool hasMomentsSettings;
- (id)multiwayAudioStreamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)multiwayAudioStreamsCount;
- (void)addMultiwayAudioStreams:(id)arg1;
- (void)clearMultiwayAudioStreams;
@property(readonly, nonatomic) _Bool hasCaptionsSettings;
- (id)bandwidthSettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)bandwidthSettingsCount;
- (void)addBandwidthSettings:(id)arg1;
- (void)clearBandwidthSettings;
@property(nonatomic) _Bool hasBasebandCodecSampleRate;
@property(readonly, nonatomic) _Bool hasBasebandCodec;
@property(readonly, nonatomic) _Bool hasUserAgent;
@property(readonly, nonatomic) _Bool hasScreenSettings;
@property(readonly, nonatomic) _Bool hasVideoSettings;
@property(readonly, nonatomic) _Bool hasAudioSettings;
@property(nonatomic) _Bool hasAllowsContentsChangeWithAspectPreservation;
@property(nonatomic) _Bool hasAllowDynamicMaxBitrate;
- (void)dealloc;
- (void)printWithTitle:(id)arg1 blobSize:(unsigned int)arg2 logFile:(void *)arg3;
- (void)printMultiwayVideoStreamsWithLogFile:(void *)arg1;
- (void)printMultiwayAudioStreamsWithLogFile:(void *)arg1;
- (void)printMomentsSettingsWithLogFile:(void *)arg1;
- (void)printCaptionsSettingsWithLogFile:(void *)arg1;
- (void)printBandwidthSettingsWithLogFile:(void *)arg1;

@end

