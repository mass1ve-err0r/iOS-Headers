//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerSink-Protocol.h>
#import <AVConference/VCAudioIOControllerSource-Protocol.h>

@class NSString;
@protocol VCAudioIOControllerDelegate><VCAudioIOControllerSink><VCAudioIOControllerSource;

__attribute__((visibility("hidden")))
@interface VCAudioIOControllerClient : NSObject <VCAudioIOControllerSource, VCAudioIOControllerSink>
{
    id _delegate;
    struct AudioStreamBasicDescription _format;
    int _deviceRole;
    _Bool _allowAudioRecording;
    int _operatingMode;
    _Bool _isRemoteCodecInfoValid;
    unsigned int _remoteCodecType;
    double _remoteCodecSampleRate;
    _Bool _isRemoteVersionInfoValid;
    struct VoiceIOFarEndVersionInfo _farEndVersionInfo;
    int _clientPid;
    _Bool _isInputMeteringEnabled;
    _Bool _isOutputMeteringEnabled;
    unsigned char _direction;
}

@property(nonatomic) unsigned char direction; // @synthesize direction=_direction;
@property(nonatomic, getter=isOuputMeteringEnabled) _Bool outputMeteringEnabled; // @synthesize outputMeteringEnabled=_isOutputMeteringEnabled;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled; // @synthesize inputMeteringEnabled=_isInputMeteringEnabled;
@property(readonly, nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property(readonly, nonatomic) struct VoiceIOFarEndVersionInfo farEndVersionInfo; // @synthesize farEndVersionInfo=_farEndVersionInfo;
@property(readonly, nonatomic) _Bool isRemoteVersionInfoValid; // @synthesize isRemoteVersionInfoValid=_isRemoteVersionInfoValid;
@property(readonly, nonatomic) double remoteCodecSampleRate; // @synthesize remoteCodecSampleRate=_remoteCodecSampleRate;
@property(readonly, nonatomic) unsigned int remoteCodecType; // @synthesize remoteCodecType=_remoteCodecType;
@property(readonly, nonatomic) _Bool isRemoteCodecInfoValid; // @synthesize isRemoteCodecInfoValid=_isRemoteCodecInfoValid;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) _Bool allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(readonly, nonatomic) struct AudioStreamBasicDescription format; // @synthesize format=_format;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1 controllerTime:(const struct _VCAudioIOControllerTime *)arg2;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1 controllerTime:(const struct _VCAudioIOControllerTime *)arg2;
@property(readonly, nonatomic) id <VCAudioIOControllerDelegate><VCAudioIOControllerSink><VCAudioIOControllerSource> delegate;
- (void)setClientFormat:(struct AudioStreamBasicDescription)arg1;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 clientPid:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

