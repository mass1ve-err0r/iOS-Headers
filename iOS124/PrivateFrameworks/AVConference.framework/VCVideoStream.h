//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStream.h>

#import <AVConference/VCMediaStreamSyncDestination-Protocol.h>
#import <AVConference/VCVideoCaptureClient-Protocol.h>
#import <AVConference/VCVideoCaptureConverterDelegate-Protocol.h>
#import <AVConference/VCVideoReceiverDelegate-Protocol.h>

@class NSArray, NSNumber, NSObject, NSString, VCVideoCaptureConverter, VCVideoReceiverBase, VCVideoRule, VCVideoTransmitterBase;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCVideoStream : VCMediaStream <VCVideoReceiverDelegate, VCMediaStreamSyncDestination, VCVideoCaptureClient, VCVideoCaptureConverterDelegate>
{
    long long _type;
    NSObject<OS_dispatch_queue> *_lastDecodedFrameQueue;
    struct _opaque_pthread_mutex_t _remoteLayerLock;
    struct _opaque_pthread_mutex_t _localLayerLock;
    unsigned int _uplinkOperatingBitrate;
    struct __CVBuffer *_cachedRemoteVideoFrame;
    long long _streamToken;
    VCVideoTransmitterBase *_videoTransmitter;
    VCVideoReceiverBase *_videoReceiver;
    VCVideoRule *_videoRule;
    int _reportingModuleID;
    NSObject<OS_dispatch_semaphore> *_bufferQueueSemaphore;
    struct opaqueCMBufferQueue *_bufferQueue;
    VCVideoCaptureConverter *_captureConverter;
    _Bool _isServerBasedBandwidthProbingEnabled;
    unsigned char _lastMediaPriority;
    NSNumber *_targetStreamID;
    NSArray *_compoundStreamIDs;
    NSNumber *_sendingStreamID;
    _Bool _isCompoundStreamIDsIncreased;
    _Bool _shouldEnableFaceZoom;
    _Bool _didReceiveFirstFrame;
    double _fecRatio;
}

+ (id)capabilities;
+ (id)supportedVideoPayloads;
@property(nonatomic) double fecRatio; // @synthesize fecRatio=_fecRatio;
@property(nonatomic) _Bool didReceiveFirstFrame; // @synthesize didReceiveFirstFrame=_didReceiveFirstFrame;
@property(nonatomic) _Bool shouldEnableFaceZoom; // @synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom;
@property(readonly, nonatomic) _Bool isCompoundStreamIDsIncreased; // @synthesize isCompoundStreamIDsIncreased=_isCompoundStreamIDsIncreased;
@property(readonly, nonatomic) NSNumber *sendingStreamID; // @synthesize sendingStreamID=_sendingStreamID;
@property(readonly, nonatomic) NSArray *compoundStreamIDs; // @synthesize compoundStreamIDs=_compoundStreamIDs;
@property(nonatomic) _Bool isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property(readonly) long long streamToken; // @synthesize streamToken=_streamToken;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectTxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1 interval:(float)arg2;
- (void)converter:(id)arg1 didConvertFrame:(struct opaqueCMSampleBuffer *)arg2 frameTime:(CDStruct_1b6d18a9)arg3 droppedFrames:(int)arg4 cameraStatusBits:(unsigned char)arg5;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)arg1;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)vcVideoReceiver:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (unsigned int)vcVideoReceiver:(id)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcVideoReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned int)arg2;
- (void)vcVideoReceiver:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (_Bool)vcVideoReceiver:(id)arg1 didReceiveRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(_Bool)arg5;
- (void)stopSynchronization;
- (_Bool)startSynchronization:(id)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2 currentStreamID:(id)arg3;
- (void)reportingVideoStreamEvent:(unsigned short)arg1 newVideoAttributes:(id)arg2;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (void)collectVideoStreamStartMetrics:(struct __CFDictionary *)arg1;
- (void)collectVideoConfigMetrics:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)getClientSpecificUserInfo;
- (struct __CFString *)getReportingClientName;
- (int)getReportingClientType;
@property unsigned int lastSentAudioSampleTime;
@property double lastSentAudioHostTime;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (double)rtcpHeartbeatLeeway;
- (void)onSendRTCPPacket;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerForVideoCapture;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onCallIDChanged;
- (id)supportedPayloads;
- (void)cleanupBeforeReconfigure:(id)arg1;
- (_Bool)validateVideoStreamConfigurations:(id)arg1;
- (void)sendLastRemoteVideoFrame:(struct __CVBuffer *)arg1;
- (void)cacheRemoteVideoFrame:(struct __CVBuffer *)arg1;
- (void)generateKeyFrame;
- (void)updateSourcePlayoutTimestamp:(CDStruct_1b6d18a9 *)arg1;
- (void)requestLastDecodedFrame;
- (void)updateVideoConfig:(id)arg1;
- (void)dealloc;
- (void)setupVideoStream;
- (id)initWithTransportSessionID:(unsigned int)arg1 ssrc:(unsigned int)arg2 streamToken:(long long)arg3;
- (id)init;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (_Bool)setRTPPayloads:(int *)arg1 numPayloads:(int)arg2 withError:(id *)arg3;
- (void)setupCompoundStreamIDsWithStreamIDs:(id)arg1;
- (void)destroyVideoModules;
- (void)destroyVideoReceiver;
- (void)updateVideoReceiver:(id)arg1;
- (_Bool)useUEPForVideoConfig:(int)arg1;
- (void)setupVideoReceiver:(id)arg1;
- (void)destroyVideoTransmitter;
- (void)initVideoTransmitter;
- (void)overrideConfigWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

