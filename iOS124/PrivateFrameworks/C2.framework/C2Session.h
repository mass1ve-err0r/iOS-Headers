//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <C2/C2RequestDelegate-Protocol.h>
#import <C2/C2SessionTaskDelegate-Protocol.h>
#import <C2/NSURLSessionDataDelegate-Protocol.h>
#import <C2/NSURLSessionDataDelegatePrivate-Protocol.h>
#import <C2/NSURLSessionDelegate-Protocol.h>
#import <C2/NSURLSessionTaskDelegate-Protocol.h>
#import <C2/NSURLSessionTaskDelegatePrivate-Protocol.h>

@class C2RequestOptions, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;
@protocol C2SessionDelegate;

@interface C2Session : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, C2RequestDelegate, C2SessionTaskDelegate>
{
    _Bool _isComplete;
    NSString *_sessionConfigurationName;
    NSURLSession *_session;
    C2RequestOptions *_options;
    NSString *_originalHost;
    NSString *_routeHost;
    double _routeLastUpdated;
    id <C2SessionDelegate> _sessionDelegate;
    double _emptyTimestamp;
    NSMutableDictionary *_wrappedTaskByTaskDescription;
    NSOperationQueue *_queue;
    CDUnknownBlockType _testBehavior_sessionInvalidated_cfnetwork;
    CDUnknownBlockType _testBehavior_sessionInvalidated_shouldInvalidate;
    CDUnknownBlockType _testBehavior_cleanupRetainCycle;
}

+ (id)portFromURL:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType testBehavior_cleanupRetainCycle; // @synthesize testBehavior_cleanupRetainCycle=_testBehavior_cleanupRetainCycle;
@property(copy, nonatomic) CDUnknownBlockType testBehavior_sessionInvalidated_shouldInvalidate; // @synthesize testBehavior_sessionInvalidated_shouldInvalidate=_testBehavior_sessionInvalidated_shouldInvalidate;
@property(copy, nonatomic) CDUnknownBlockType testBehavior_sessionInvalidated_cfnetwork; // @synthesize testBehavior_sessionInvalidated_cfnetwork=_testBehavior_sessionInvalidated_cfnetwork;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableDictionary *wrappedTaskByTaskDescription; // @synthesize wrappedTaskByTaskDescription=_wrappedTaskByTaskDescription;
@property(nonatomic) double emptyTimestamp; // @synthesize emptyTimestamp=_emptyTimestamp;
@property(retain, nonatomic) id <C2SessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) double routeLastUpdated; // @synthesize routeLastUpdated=_routeLastUpdated;
@property(retain, nonatomic) NSString *routeHost; // @synthesize routeHost=_routeHost;
@property(retain, nonatomic) NSString *originalHost; // @synthesize originalHost=_originalHost;
@property(readonly, copy, nonatomic) C2RequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) NSString *sessionConfigurationName; // @synthesize sessionConfigurationName=_sessionConfigurationName;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sessionTaskDelegateCallbackHelper:(id)arg1 task:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)cleanupRetainCycle;
- (void)C2Session:(id)arg1 sessionTask:(id)arg2 updatedRoute:(id)arg3;
- (void)testBehavior_triggerSessionExpiry;
- (void)invalidateAndCancel;
- (_Bool)shouldInvalidateAndCancel;
- (void)removeTask:(id)arg1;
- (id)addTask:(id)arg1 withDescription:(id)arg2 request:(id)arg3;
- (void)_recalculateSessionDelegateQueuePriority;
- (id)createTaskWithOptions:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)initWithSessionConfigurationName:(id)arg1 routeHost:(id)arg2 options:(id)arg3 sessionDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

