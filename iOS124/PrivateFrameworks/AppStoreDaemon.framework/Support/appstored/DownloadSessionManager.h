//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class DownloadAgentSupervisor, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface DownloadSessionManager : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    DownloadAgentSupervisor *_downloadSupervisor;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_sessions;
    NSMutableDictionary *_taskStates;
}

- (void).cxx_destruct;
- (id)_delegateForSession:(id)arg1 task:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)existingDataTaskForDownloadID:(long long)arg1 withDelegate:(id)arg2;
- (id)dataTaskForDownloadID:(long long)arg1 withRequest:(id)arg2 configuration:(id)arg3 delegate:(id)arg4;
- (id)initWithDownloadSupervisor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

