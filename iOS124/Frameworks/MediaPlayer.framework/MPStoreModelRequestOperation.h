//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelResponse, MPStoreModelRequest, NSObject, NSOperation;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MPStoreModelRequestOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSOperation *_childOperation;
    MPModelResponse *_response;
    double _startExecutingTimeStamp;
    NSObject<OS_dispatch_source> *_timeoutTimerSource;
    MPStoreModelRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) MPStoreModelRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_tearDownTimeoutTimerSource;
- (void)_handleTimeout;
- (void)_executeURLLoadWithRequest:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3;
- (void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 requestContext:(id)arg3;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)assertRunningInAccessQueue;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (double)adjustTimeoutInterval:(double)arg1;
@property(readonly, nonatomic) double remainingTimeInterval;
- (void)finishWithError:(id)arg1;
- (void)execute;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

