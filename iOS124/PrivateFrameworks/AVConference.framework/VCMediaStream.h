//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

#import <AVConference/RTCPReportProvider-Protocol.h>
#import <AVConference/VCConnectionChangedHandler-Protocol.h>
#import <AVConference/VCMediaStreamProtocol-Protocol.h>
#import <AVConference/VCMediaStreamTransportDelegate-Protocol.h>
#import <AVConference/VCSecurityEventHandler-Protocol.h>

@class AVCBasebandCongestionDetector, AVCStatisticsCollector, NSMutableArray, NSObject, NSString, VCDatagramChannelIDS, VCMasterKeyIndex, VCMediaStreamConfig, VCMediaStreamTransport, VCWeakObjectHolder;
@protocol OS_dispatch_queue, OS_dispatch_source, RTCPReportProvider, VCMediaStreamDelegate, VCMediaStreamNotification, VCMomentsCollectorDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaStream : VCObject <VCMediaStreamProtocol, RTCPReportProvider, VCSecurityEventHandler, VCMediaStreamTransportDelegate, VCConnectionChangedHandler>
{
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    struct _opaque_pthread_mutex_t _streamLock;
    int _state;
    VCDatagramChannelIDS *_datagramChannel;
    NSString *_idsDestination;
    id <VCMediaStreamDelegate> _delegate;
    id <VCMomentsCollectorDelegate> _momentsCollectorDelegate;
    NSString *_callID;
    _Bool _isSRTPInitialized;
    _Bool _useRandomTS;
    double _rtpTimeoutEnabledTime;
    double _rtcpTimeoutEnabledTime;
    double _decryptionTimeoutEnabledTime;
    NSObject<OS_dispatch_source> *_rtcpSendHeartbeat;
    NSObject<OS_dispatch_source> *_timeoutHeartbeat;
    double _lastRTPTimeoutReportTime;
    double _lastRTCPTimeoutReportTime;
    double _lastDecryptionTimeoutReportTime;
    double _decryptionErrorStartTime;
    unsigned int _localSSRC;
    unsigned int _transportSessionID;
    VCWeakObjectHolder *_notificationDelegate;
    VCWeakObjectHolder *_rtcpReportProvider;
    AVCStatisticsCollector *_statisticsCollector;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    int _operatingMode;
    struct _VCMediaStreamTransportSetupInfo _transportSetupInfo;
    NSMutableArray *_transportArray;
    CDUnknownFunctionPointerType _vcMediaCallback;
    struct tagVCMediaQueue *_mediaQueue;
    VCMasterKeyIndex *_lastReceivedMKI;
}

+ (_Bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(readonly, nonatomic) unsigned int localSSRC; // @synthesize localSSRC=_localSSRC;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectTxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_1c8e0384 *)arg1 interval:(float)arg2;
@property(readonly, nonatomic) double rtcpHeartbeatLeeway;
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property(readonly, nonatomic) double lastReceivedRTPPacketTime;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onSendRTCPPacket;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)supportedPayloads;
- (void)onCallIDChanged;
@property(nonatomic) id <VCMediaStreamNotification> notificationDelegate;
- (void)stopTimeoutHeartbeat;
- (void)startTimeoutHeartbeat;
- (void)timeoutHeartbeat;
- (void)checkForDecryptionTimeout;
- (void)checkDecryptionTimeoutAgainstTime:(double)arg1 decryptionErrorStartTime:(double)arg2;
- (void)checkRTCPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (void)checkRTPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (double)computeNextTimoutWithEnabledTime:(double)arg1 timeoutInterval:(double)arg2 lastReceivedPacketTime:(double)arg3 currentTime:(double)arg4 lastTimeoutReportTime:(double)arg5;
- (void)resetTimeoutHeartbeatWithRTPTimeout:(double)arg1 rtcpTimeout:(double)arg2 decryptionTimeout:(double)arg3 currentTime:(double)arg4;
- (void)resetTimeoutHeartbeatTimer:(unsigned long long)arg1;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (void)stopRTCPSendHeartbeat;
- (void)startRTCPSendHeartbeat;
- (void)rtcpSendHeartbeat;
- (void)resetRTCPSendHeartbeatTimer:(unsigned long long)arg1;
- (void)vcMediaStreamTransport:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
@property(nonatomic) id <RTCPReportProvider> rtcpReportProvider;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setDecryptionTimeOutInterval:(double)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setDecryptionTimeOutEnabled:(_Bool)arg1;
- (void)setRtcpTimeOutEnabled:(_Bool)arg1;
- (void)setRtpTimeOutEnabled:(_Bool)arg1;
- (void)processDecryptionTimeoutSettingChange;
- (void)processRTCPTimeoutSettingChange;
- (void)processRTPTimeoutSettingChange;
- (_Bool)isRTCPSendEnabled;
- (_Bool)isDecryptionTimeoutEnabled;
- (_Bool)isRTCPTimeoutEnabled;
- (_Bool)isRTPTimeoutEnabled;
- (void)setRtcpEnabled:(_Bool)arg1;
- (long long)streamDirection;
- (void)setStreamDirection:(long long)arg1;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (void)setPause:(_Bool)arg1;
- (void)stop;
- (void)start;
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;
- (void)resetDecryptionTimeout;
- (_Bool)handleEncryptionInfoChange:(id)arg1;
- (id)createTransport;
- (char *)streamStateToString:(int)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (void)setupMediaStream;
- (id)initWithTransportSessionID:(unsigned int)arg1 localSSRC:(unsigned int)arg2;
- (id)initWithTransportSessionID:(unsigned int)arg1;
- (id)init;
- (id)setupRTPWithIPInfo:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithIDSDestination:(id)arg1 error:(id *)arg2;
- (id)setupRTPForIDS;
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithSockets:(id)arg1 error:(id *)arg2;
- (void)decryptionStatusChanged:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isSendingMedia;
@property(readonly, nonatomic) VCMediaStreamConfig *defaultStreamConfig;
@property(readonly, nonatomic) VCMediaStreamTransport *defaultTransport;
@property(nonatomic) id <VCMomentsCollectorDelegate> momentsCollectorDelegate; // @synthesize momentsCollectorDelegate=_momentsCollectorDelegate;
@property(nonatomic) id <VCMediaStreamDelegate> delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

