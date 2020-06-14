//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMWeakReference, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface IDSBaseSocketPairConnection : NSObject
{
    IMWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_outgoingDataArray;
    NSObject<OS_dispatch_queue> *_readQueue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    int _connectedSocket;
    double _lastDateCheck;
    long long _bytesReceived;
    double _prevBPS;
    _Bool _writeSourceIsResumed;
}

@property(readonly, nonatomic) int socket; // @synthesize socket=_connectedSocket;
- (void).cxx_destruct;
- (_Bool)sendData:(id)arg1;
- (void)_setupWriteSource;
- (void)_sendToConnectedSocket;
- (void)start;
- (void)_processBytesAvailable;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)setDestination:(id)arg1;
- (void)endSession;
- (void)dealloc;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(_Bool)arg4;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

@end

