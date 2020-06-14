//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCMediaStreamConfig, NSDictionary, VCTextStream;
@protocol AVCTextStreamDelegate, OS_dispatch_queue;

@interface AVCTextStream : NSObject
{
    VCTextStream *_opaqueStream;
    AVCMediaStreamConfig *_configuration;
    id _delegate;
    long long _streamToken;
    NSDictionary *_capabilities;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) AVCMediaStreamConfig *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(nonatomic) double rtcpSendIntervalSec;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property(nonatomic) long long direction;
@property(nonatomic) id <AVCTextStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (_Bool)configure:(id)arg1 error:(id *)arg2;
- (void)refreshLoggingParameters;
- (void)dealloc;
- (id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id *)arg3;

@end

