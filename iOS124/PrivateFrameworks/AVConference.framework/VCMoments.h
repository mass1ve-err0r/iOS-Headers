//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMomentsMessenger-Protocol.h>

@class NSMutableSet, NSString, VCMomentsHistory, VideoAttributes;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMoments : NSObject <VCMomentsMessenger>
{
    id _delegate;
    id _transportDelegate;
    unsigned int _streamToken;
    VCMomentsHistory *_momentsHistory;
    unsigned int _capabilities;
    unsigned char _mode;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int _currentActiveRequestsCount;
    _Bool _isClientRegistered;
    VideoAttributes *_remoteScreenAttributes;
    NSMutableSet *_requests;
    _Bool _lastRequest;
}

+ (unsigned long long)deviceFreeDiskSpace;
+ (_Bool)deviceHasSufficientFreeSpace;
@property(retain, nonatomic) VideoAttributes *remoteScreenAttributes; // @synthesize remoteScreenAttributes=_remoteScreenAttributes;
@property(readonly, nonatomic) _Bool isClientRegistered; // @synthesize isClientRegistered=_isClientRegistered;
@property(nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
- (void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2;
- (unsigned long long)directorySize:(id)arg1;
- (_Bool)isHistorySupported;
- (_Bool)validateNumberOfRequestsWithError:(id *)arg1;
- (void)updateVCMomentsMode;
- (void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2;
- (void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2 fileSize:(long long)arg3;
- (void)notifyFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2 fileSize:(long long)arg3;
- (void)processRemotePhotoRequest:(id)arg1;
- (void)processRemoteLivePhotoRequest:(id)arg1;
- (void)processRemoteVideoRequest:(id)arg1;
- (void)deregisterClient;
- (void)registerClient;
- (void)cleanupActiveRequests;
- (_Bool)processClientRequest:(id)arg1 error:(id *)arg2;
- (void)setMomentsDelegate:(id)arg1;
- (id)momentsDelegate;
- (void)setTransportDelegate:(id)arg1;
- (id)transportDelegate;
- (void)setFrameRate:(float)arg1;
- (void)processRequest:(id)arg1;
- (void)updateRemoteScreenAttributes:(id)arg1;
- (void)getInitialRemoteScreenAttributes:(id)arg1;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithStreamToken:(unsigned int)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

