//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StreamingZip/StreamingUnzipProtocol-Protocol.h>

@class NSXPCConnection, StreamingUnzipState;
@protocol OS_dispatch_queue, StreamingUnzipDelegateProtocol;

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol>
{
    long long _sandboxToken;
    void *_decompressionOutputBuffer;
    StreamingUnzipState *_currentState;
    int _activeDelegateMethods;
    double _lastExtractionProgressSent;
    NSXPCConnection *xpcConnection;
    id <StreamingUnzipDelegateProtocol> inProcessExtractorDelegate;
    NSObject<OS_dispatch_queue> *inProcessDelegateQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inProcessDelegateQueue; // @synthesize inProcessDelegateQueue;
@property(nonatomic) __weak id <StreamingUnzipDelegateProtocol> inProcessExtractorDelegate; // @synthesize inProcessExtractorDelegate;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection;
- (void).cxx_destruct;
- (void)terminateStreamWithReply:(CDUnknownBlockType)arg1;
- (void)finishStreamWithReply:(CDUnknownBlockType)arg1;
- (void)suspendStreamWithReply:(CDUnknownBlockType)arg1;
- (void)supplyBytes:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)_supplyBytes:(const char *)arg1 length:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_extractionEnteredPassThroughMode;
- (void)_sendExtractionCompleteAtArchivePath:(id)arg1;
- (void)_sendExtractionProgress:(double)arg1;
- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)_setErrorState;
- (void)dealloc;
- (void)setActiveDelegateMethods:(int)arg1;
- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 options:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (id)init;

@end

