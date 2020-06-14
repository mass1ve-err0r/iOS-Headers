//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData, _RWITCPServer;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPConnection : NSObject
{
    int _socket;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_inputSource;
    NSObject<OS_dispatch_source> *_outputSource;
    _Bool _shutdown;
    _Bool _outputSourceSuspended;
    _Bool _inputSourceCancelled;
    _Bool _outputSourceCancelled;
    NSMutableArray *_outputMessageQueue;
    NSMutableData *_incomingData;
    _RWITCPServer *_server;
    long long _type;
    id <_RWITCPConnectionDelegate> _delegate;
}

+ (id)TCPConnectionWithResolvedNetService:(id)arg1;
+ (id)TCPConnectionWithSocketPath:(id)arg1;
+ (id)TCPConnectionWithPort:(unsigned short)arg1;
@property(nonatomic) __weak id <_RWITCPConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;
- (void)_handleInput;
- (void)_closeInputStream;
- (void)_createInputSource;
- (void)_handleOutput;
- (void)_setOutputSourceSuspended:(_Bool)arg1;
- (void)_closeOutputStream;
- (void)_createOutputSource;
- (void)startReceiving;
- (void)sendMessage:(id)arg1;
- (void)_dispatchSourceCancelled;
- (void)_shutdown;
- (void)dealloc;
- (void)_commonInitializationWithServer:(id)arg1 socket:(int)arg2 type:(long long)arg3;
- (id)initWithServer:(id)arg1 socket:(int)arg2;

@end

