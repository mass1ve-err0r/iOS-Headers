//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSProxyConnectionDelegate, OS_tcp_connection;

__attribute__((visibility("hidden")))
@interface NSProxyConnection : NSObject
{
    _Bool _doCleanupWhenWritesCompleted;
    id <NSProxyConnectionDelegate> _delegate;
    long long _pendingWrites;
    NSObject<OS_tcp_connection> *_connection;
}

@property(retain) NSObject<OS_tcp_connection> *connection; // @synthesize connection=_connection;
@property _Bool doCleanupWhenWritesCompleted; // @synthesize doCleanupWhenWritesCompleted=_doCleanupWhenWritesCompleted;
@property long long pendingWrites; // @synthesize pendingWrites=_pendingWrites;
@property __weak id <NSProxyConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (id)initWithTCPConnection:(id)arg1;

@end

