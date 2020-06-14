//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSFileHandle, NSPipe;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MSVFileBufferedPipe : NSObject
{
    NSFileHandle *_writeBufferFileHandle;
    NSFileHandle *_readBufferFileHandle;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readyForData;
    _Bool _hasBufferedData;
    _Bool _readSourceClosed;
    NSData *_dataPendingWrite;
    unsigned int _dataPendingOffset;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileHandle *_fileHandleForReading;
    NSFileHandle *_fileHandleForWriting;
}

+ (id)pipe;
@property(readonly, retain) NSFileHandle *fileHandleForWriting; // @synthesize fileHandleForWriting=_fileHandleForWriting;
@property(readonly, retain) NSFileHandle *fileHandleForReading; // @synthesize fileHandleForReading=_fileHandleForReading;
- (void).cxx_destruct;
- (void)_writeBufferedData;
- (void)_inputReadyForReading:(unsigned long long)arg1;
- (void)_outputReadyForWriting:(unsigned long long)arg1;
- (void)_createBufferFiles;
- (id)init;

@end

