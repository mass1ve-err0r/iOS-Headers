//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MPStoreRedownloadProductResponse, NSError, NSObject, NSString, SSVLoadURLOperation;
@protocol OS_dispatch_queue;

@interface MPStoreRedownloadProductOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPStoreRedownloadProductResponse *_redownloadProductResponse;
    NSError *_responseError;
    _Bool _shouldUseStreamingRedownload;
    SSVLoadURLOperation *_URLOperation;
    _Bool _streamingRental;
    NSString *_buyParameters;
    unsigned long long _endpointType;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
}

@property(copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(nonatomic, getter=isStreamingRental) _Bool streamingRental; // @synthesize streamingRental=_streamingRental;
@property(readonly, nonatomic) unsigned long long endpointType; // @synthesize endpointType=_endpointType;
@property(readonly, copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSError *responseError;
@property(readonly, nonatomic) MPStoreRedownloadProductResponse *redownloadProductResponse;
- (void)main;
- (void)cancel;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 shouldUseStreamingRedownload:(_Bool)arg3;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2;
- (id)init;

@end

