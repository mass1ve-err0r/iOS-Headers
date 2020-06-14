//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSURLSessionConfiguration;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

@interface NSURLSession : NSObject
{
}

+ (id)_errorFromError:(id)arg1 forTask:(id)arg2;
+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sessionWithConfiguration:(id)arg1;
+ (void)_obliterateAllBackgroundSessionsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_getActiveSessionIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (void)_sendPendingCallbacksForSessionIdentifier:(id)arg1;
+ (id)_sharedSessionForConnection;
+ (id)sharedSession;
- (void)finalizeDelegateWithError:(id)arg1;
- (_Bool)isBackgroundSession;
- (id)_copyConfiguration;
- (struct __CFDictionary *)_copyATSState;
- (id)dataTaskWithHTTPGetRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4;
- (id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)getAllTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishTasksAndInvalidate;
- (void)invalidateAndCancel;
- (void)delegate_connectionEstablishedForStreamTask:(id)arg1;
- (_Bool)can_delegate_connectionEstablishedForStreamTask;
- (void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_dataTask_didBecomeStreamTask;
- (void)delegate_streamTask:(id)arg1 didBecomeInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)can_delegate_streamTask_didBecomeInputStream_outputStream;
- (void)delegate_betterRouteDiscoveredForStreamTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)can_delegate_betterRouteDiscoveredForStreamTask;
- (void)delegate_writeClosedForStreamTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)can_delegate_writeClosedForStreamTask;
- (void)delegate_readClosedForStreamTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)can_delegate_readClosedForStreamTask;
- (void)delegate_AVAggregateAssetDownloadTask:(id)arg1 didLoadTimeRange:(CDStruct_3c1748cc)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg4 forMediaSelection:(id)arg5;
- (_Bool)can_delegate_AVAggregateAssetDownloadTask_didLoadTimeRange;
- (void)delegate_AVAggregateAssetDownloadTask:(id)arg1 didCompleteForMediaSelection:(id)arg2;
- (_Bool)can_delegate_AVAggregateAssetDownloadTask_didCompleteForMediaSelection;
- (void)delegate_AVAggregateAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2;
- (_Bool)can_delegate_AVAggregateAssetDownloadTask_willDownloadToURL;
- (void)delegate_AVAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2;
- (_Bool)can_delegate_AVAssetDownloadTask_willDownloadToURL;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_AVAssetDownloadTask_didFinishDownloadingToURL;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didResolveMediaSelection:(id)arg2;
- (_Bool)can_delegate_AVAssetDownloadTask_didResolveMediaSelection;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didLoadTimeRange:(CDStruct_3c1748cc)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg4;
- (_Bool)can_delegate_AVAssetDownloadTask_didLoadTimeRange;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (_Bool)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (_Bool)can_delegate_AVAssetDownloadTask_didWriteData;
- (void)delegate_didFinishEventsForBackgroundURLSession;
- (_Bool)can_delegate_didFinishEventsForBackgroundURLSession;
- (id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1;
- (_Bool)can_delegate_downloadTaskNeedsDownloadDirectory;
- (void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)can_delegate_downloadTask_didReceiveResponse;
- (void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (_Bool)can_delegate_downloadTask_didResumeAtOffset;
- (void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)can_delegate_downloadTask_didWriteData;
- (void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_downloadTask_didFinishDownloadingToURL;
- (void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2;
- (_Bool)can_delegate_willRetryBackgroundDataTask;
- (void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_dataTask_willCacheResponse;
- (void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_dataTask_didReceiveData;
- (void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_dataTask_didBecomeDownloadTask;
- (void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_dataTask_didReceiveResponse;
- (void)delegate_task:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_task_didFinishCollectingMetrics;
- (void)delegate_task:(id)arg1 conditionalRequirementsChanged:(_Bool)arg2;
- (_Bool)can_delegate_task_conditionalRequirementsChanged;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithError:(id)arg2;
- (_Bool)can_delegate_task_isWaitingForConnectionWithError;
- (void)delegate_task:(id)arg1 isWaitingForConnectionWithReason:(long long)arg2;
- (_Bool)can_delegate_task_isWaitingForConnectionWithReason;
- (void)delegate_task_isWaitingForConnection:(id)arg1;
- (_Bool)can_delegate_task_isWaitingForConnection;
- (void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_task_willSendRequestForEstablishedConnection;
- (void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2;
- (_Bool)can_delegate_task_actually_didCompleteWithError;
- (_Bool)can_delegate_task_didCompleteWithError;
- (void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (_Bool)can_delegate_task_didSendBodyData;
- (void)delegate_task:(id)arg1 _schemeUpgraded:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_task__schemeUpgraded;
- (void)delegate_task:(id)arg1 needNewBodyStream:(CDUnknownBlockType)arg2;
- (_Bool)can_delegate_task_needNewBodyStream;
- (void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_task_didReceiveChallenge;
- (void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)can_delegate_task_willPerformHTTPRedirection;
- (void)delegate_taskIsWaitingForConnectivity:(id)arg1;
- (_Bool)can_delegate_taskIsWaitingForConnectivity;
- (void)delegate_task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_task_willBeginDelayedRequest;
- (void)remote_externalAuthenticator_task:(id)arg1 getAuthHeadersForResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)delegate_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)can_delegate_needConnectedSocket;
- (void)delegate_companionAvailabilityChanged:(_Bool)arg1;
- (_Bool)can_delegate_companionAvailabilityChanged;
- (int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2;
- (_Bool)can_delegate_openFileAtPath;
- (void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)can_delegate_didReceiveChallenge;
- (void)addDelegateBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSURLSessionConfiguration *configuration; // @dynamic configuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_useTLSSessionCacheFromSession:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

// Remaining properties
@property(retain) NSMutableDictionary *_altSvc; // @dynamic _altSvc;
@property(copy) NSDictionary *_atsState; // @dynamic _atsState;
@property(retain) NSMutableDictionary *_coalescing; // @dynamic _coalescing;
@property(copy) CDUnknownBlockType _connBlock; // @dynamic _connBlock;
@property(retain) NSMutableSet *_h2BlacklistedHosts; // @dynamic _h2BlacklistedHosts;
@property _Bool _isSharedSession; // @dynamic _isSharedSession;
@property(copy) NSURLSessionConfiguration *_local_immutable_configuration; // @dynamic _local_immutable_configuration;
@property(copy) NSString *_uuid; // @dynamic _uuid;
@property(retain) id <NSURLSessionDelegate> delegate; // @dynamic delegate;
@property(retain) NSOperationQueue *delegateQueue; // @dynamic delegateQueue;
@property _Bool invalid; // @dynamic invalid;
@property(copy) NSString *sessionDescription; // @dynamic sessionDescription;
@property(readonly, retain) NSObject<OS_dispatch_queue> *workQueue; // @dynamic workQueue;

@end

