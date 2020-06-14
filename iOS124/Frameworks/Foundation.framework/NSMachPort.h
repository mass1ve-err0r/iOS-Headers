//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort
{
    id _delegate;
    unsigned long long _flags;
    unsigned int _machPort;
    unsigned long long _reserved;
}

+ (_Bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned long long)arg7;
+ (void)parseMachMessage:(void *)arg1 localPort:(id *)arg2 remotePort:(id *)arg3 msgid:(unsigned int *)arg4 components:(id *)arg5;
+ (void)_fixNSMachPortLeak;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;
+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)port;
+ (void)resetAllPorts;
- (id)init;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)handlePortMessage:(id)arg1;
- (void)addConnection:(id)arg1 toRunLoop:(id)arg2 forMode:(id)arg3;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5;
- (_Bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4;
- (_Bool)sendBeforeTime:(double)arg1 streamData:(void *)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
@property(readonly) unsigned int machPort;
- (void)invalidate;
- (_Bool)isValid;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (unsigned long long)retainCount;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)_cfTypeID;

@end

