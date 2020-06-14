//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/_SYStreamGuts.h>

#import <CompanionSync/NSLocking-Protocol.h>

@interface _SYZlibStreamInternal : _SYStreamGuts <NSLocking>
{
    struct z_stream_s _zStream;
    unsigned long long _inputSize;
    unsigned long long _outputSize;
    char *_input;
    char *_output;
    unsigned long long _writeOffset;
    unsigned long long _readOffset;
    struct os_unfair_lock_s _lock;
}

- (long long)readOutputToStream:(id)arg1;
- (long long)readOutputToBuffer:(void *)arg1 length:(long long)arg2;
- (long long)writeInputFromStream:(id)arg1;
- (long long)writeInputFromBuffer:(const void *)arg1 length:(long long)arg2;
@property(readonly, nonatomic) const void *outputPtr;
@property(readonly, nonatomic) long long outputAvailable;
@property(readonly, nonatomic) void *inputPtr;
@property(readonly, nonatomic) long long inputRoom;
- (void)setStatusForStream:(id)arg1;
- (void)setZlibError:(int)arg1 forStream:(id)arg2;
- (void)setOutputSize:(long long)arg1;
- (void)setInputSize:(long long)arg1;
- (void)synchronized:(CDUnknownBlockType)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

