//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, VCMediaNegotiatorAudioResults, VCMediaNegotiatorCaptionsResults, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorMomentsResults, VCMediaNegotiatorResults, VCMediaNegotiatorVideoResults;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiator : NSObject
{
    _Bool _usePreNegotiation;
    _Bool _negotiationDone;
    _Bool _isCellular16x9Capable;
    VCMediaNegotiatorLocalConfiguration *_localSettings;
    VCMediaNegotiatorResults *_negotiatedSettings;
    VCMediaNegotiatorAudioResults *_negotiatedAudioSettings;
    VCMediaNegotiatorVideoResults *_negotiatedVideoSettings;
    VCMediaNegotiatorVideoResults *_negotiatedScreenSettings;
    VCMediaNegotiatorCaptionsResults *_negotiatedCaptionsSettings;
    VCMediaNegotiatorMomentsResults *_negotiatedMomentsSettings;
    NSMutableArray *_negotiatedMultiwayAudioStreams;
    NSMutableArray *_negotiatedMultiwayVideoStreams;
}

+ (id)newCompressedBlob:(id)arg1;
+ (id)newDecompressedBlob:(id)arg1;
+ (id)negotiationBlobFromData:(id)arg1;
@property(readonly, nonatomic) NSArray *negotiatedMultiwayVideoStreams; // @synthesize negotiatedMultiwayVideoStreams=_negotiatedMultiwayVideoStreams;
@property(readonly, nonatomic) NSArray *negotiatedMultiwayAudioStreams; // @synthesize negotiatedMultiwayAudioStreams=_negotiatedMultiwayAudioStreams;
@property(readonly, nonatomic) VCMediaNegotiatorMomentsResults *negotiatedMomentsSettings; // @synthesize negotiatedMomentsSettings=_negotiatedMomentsSettings;
@property(readonly, nonatomic) VCMediaNegotiatorCaptionsResults *negotiatedCaptionsSettings; // @synthesize negotiatedCaptionsSettings=_negotiatedCaptionsSettings;
@property(readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) VCMediaNegotiatorVideoResults *negotiatedScreenSettings; // @synthesize negotiatedScreenSettings=_negotiatedScreenSettings;
@property(readonly, nonatomic) VCMediaNegotiatorVideoResults *negotiatedVideoSettings; // @synthesize negotiatedVideoSettings=_negotiatedVideoSettings;
@property(readonly, nonatomic) VCMediaNegotiatorAudioResults *negotiatedAudioSettings; // @synthesize negotiatedAudioSettings=_negotiatedAudioSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings; // @synthesize negotiatedSettings=_negotiatedSettings;
@property(readonly, nonatomic) _Bool usePreNegotiation; // @synthesize usePreNegotiation=_usePreNegotiation;
- (_Bool)negotiateCaptionsWithCaptionsSettings:(id)arg1;
- (void)setupCaptionsForMediaBlob:(id)arg1;
- (_Bool)negotiateMultiwayVideoStreams:(id)arg1;
- (_Bool)isVideoStreamSupported:(int)arg1;
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)arg1;
- (_Bool)negotiateMultiwayAudioStreams:(id)arg1;
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)arg1;
- (_Bool)negotiateMomentsWithMomentsSettings:(id)arg1;
- (void)setupMomentsForMediaBlob:(id)arg1;
- (_Bool)setupScreenWithNegotiatedSettings:(id)arg1;
- (_Bool)negotiateScreenSettings:(id)arg1;
- (id)getPreferredScreenPayloadList;
- (_Bool)setupVideoWithNegotiatedSettings:(id)arg1;
- (_Bool)negotiateVideoSettings:(id)arg1;
- (_Bool)canDecodeVideo:(id)arg1;
- (_Bool)canEncodeVideo:(id)arg1;
- (_Bool)processParameterSets:(id)arg1 videoResults:(id)arg2;
- (void)negotiateRTCPFB:(id)arg1;
- (_Bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(_Bool)arg7;
- (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(_Bool)arg3;
- (id)getPreferredVideoPayloadList:(id)arg1;
- (id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2;
- (_Bool)setupAudioWithNegotiatedSettings:(id)arg1;
- (_Bool)negotiateAudioSettings:(id)arg1;
- (void)negotiateAudioSecondaryPayloads:(id)arg1;
- (_Bool)negotiateAudioREDPayload:(id)arg1;
- (_Bool)negotiateAudioDTXPayload:(id)arg1;
- (_Bool)negotiateAudioPrimaryPayload:(id)arg1;
- (void)negotiateAudioUseSBR:(id)arg1 audioRuleCollection:(id)arg2;
- (void)negotiateAudioAllowRecording:(id)arg1;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1;
- (_Bool)setupBandwidthSettingsForMediaBlob:(id)arg1;
- (_Bool)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3;
- (int)bandwidthConfigurationWithOperatingMode:(int)arg1 connectionType:(int)arg2;
- (void)dumpBlob:(id)arg1 prefix:(id)arg2;
- (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;
- (_Bool)processResponseBlob:(id)arg1;
- (id)newResponseBlob;
- (_Bool)processInviteBlob:(id)arg1;
- (id)newInviteBlob;
- (void)dealloc;
- (_Bool)isCellular16x9EncodeCapable;
@property(readonly, nonatomic) _Bool isCaller;
- (id)initWithLocalSettings:(id)arg1;

@end

