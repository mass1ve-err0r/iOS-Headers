//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSStreamDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionStreamDelegate-Protocol.h>

@class NSError, NSInputStream, NSOutputStream, NSString, NSURLSession, NSURLSessionStreamTask;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSURLSessionStreamTaskTester : NSObject <NSURLSessionStreamDelegate, NSStreamDelegate>
{
    struct StreamTaskTestConfig _testConfig;
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_session;
    NSURLSessionStreamTask *_streamTask;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    CDUnknownBlockType _completion;
    NSError *_inputStreamError;
    NSError *_outputStreamError;
    long long _bytesRead;
    long long _bytesWritten;
}

- (id).cxx_construct;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)cleanupOutputStream;
- (void)cleanupInputStream;
- (void)resumeWithTestBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithTestConfig:(struct StreamTaskTestConfig)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

