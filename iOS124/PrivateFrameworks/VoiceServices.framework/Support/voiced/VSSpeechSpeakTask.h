//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "VSSpeechSpeakableProtocol-Protocol.h"

@class NSArray, NSError, NSObject, NSString, VSAudioData, VSAudioPlaybackService, VSCachingService, VSInstrumentMetrics, VSSpeechEngine, VSSpeechRequest, VSVoiceAssetSelection, VSVoiceBooster, VSVoiceResourceAsset;
@protocol OS_dispatch_queue, VSSpeechCacheItem, VSSpeechServiceDelegate;

@interface VSSpeechSpeakTask : NSOperation <VSSpeechSpeakableProtocol>
{
    VSSpeechRequest *_request;
    NSArray *_timingInfos;
    id <VSSpeechServiceDelegate> _delegate;
    VSSpeechEngine *_engine;
    VSVoiceBooster *_voiceBooster;
    VSAudioPlaybackService *_playbackService;
    VSVoiceAssetSelection *_voiceSelection;
    VSVoiceResourceAsset *_voiceResource;
    VSCachingService *_cachingService;
    VSInstrumentMetrics *_instrumentMetrics;
    id <VSSpeechCacheItem> _speechCache;
    NSArray *_phonemes;
    NSString *_utterance;
    VSAudioData *_audio;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_taskAuxiliaryQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskAuxiliaryQueue; // @synthesize taskAuxiliaryQueue=_taskAuxiliaryQueue;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VSAudioData *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) NSString *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) NSArray *phonemes; // @synthesize phonemes=_phonemes;
@property(retain, nonatomic) id <VSSpeechCacheItem> speechCache; // @synthesize speechCache=_speechCache;
@property(retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // @synthesize instrumentMetrics=_instrumentMetrics;
@property(retain, nonatomic) VSCachingService *cachingService; // @synthesize cachingService=_cachingService;
@property(retain, nonatomic) VSVoiceResourceAsset *voiceResource; // @synthesize voiceResource=_voiceResource;
@property(retain, nonatomic) VSVoiceAssetSelection *voiceSelection; // @synthesize voiceSelection=_voiceSelection;
@property(retain, nonatomic) VSAudioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) VSVoiceBooster *voiceBooster; // @synthesize voiceBooster=_voiceBooster;
@property(retain, nonatomic) VSSpeechEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak id <VSSpeechServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *timingInfos; // @synthesize timingInfos=_timingInfos;
@property(retain, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)audioPowerProvider;
- (void)reportTimingInfo;
- (void)reportSpeechStart;
- (void)reportFinish;
- (void)reportInstrumentMetrics;
- (void)synthesizeAndSpeak;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)main;
- (id)md5hash;
- (_Bool)isSpeaking;
- (id)initWithRequest:(id)arg1;
- (void)logFinish;
- (id)_fetchVoiceAsset_NoRetry;
- (void)fetchVoiceAsset;
- (void)fetchVoiceResource;
- (void)adjustWordTimingInfo;
- (void)resumePlayback;
- (void)pausePlayback;
- (void)waitUntilAudioFinished;
- (void)startPlaybackServiceWithAudioSessionID:(unsigned int)arg1;
- (void)speakCachedAudio;
- (void)prepareForSynthesis;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

