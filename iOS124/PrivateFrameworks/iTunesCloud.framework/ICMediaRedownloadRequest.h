//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaRedownloadResponse, ICStoreRequestContext, ICStoreURLRequest, NSDictionary, NSString;

@interface ICMediaRedownloadRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    ICMediaRedownloadResponse *_redownloadResponse;
    ICStoreURLRequest *_storeURLRequest;
    _Bool _playbackRequest;
    _Bool _usePrioritizedURLSession;
    _Bool _includeKeybagSyncData;
    _Bool _includeSubscriptionKeybagSyncData;
    NSDictionary *_redownloadParameters;
    NSString *_requestURLBagKey;
}

@property(nonatomic) _Bool includeSubscriptionKeybagSyncData; // @synthesize includeSubscriptionKeybagSyncData=_includeSubscriptionKeybagSyncData;
@property(nonatomic) _Bool includeKeybagSyncData; // @synthesize includeKeybagSyncData=_includeKeybagSyncData;
@property(copy, nonatomic) NSString *requestURLBagKey; // @synthesize requestURLBagKey=_requestURLBagKey;
@property(copy, nonatomic) NSDictionary *redownloadParameters; // @synthesize redownloadParameters=_redownloadParameters;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic) _Bool usePrioritizedURLSession; // @synthesize usePrioritizedURLSession=_usePrioritizedURLSession;
@property(nonatomic, getter=isPlaybackRequest) _Bool playbackRequest; // @synthesize playbackRequest=_playbackRequest;
- (void).cxx_destruct;
- (void)_executeWithActiveICloudAccountProperties:(id)arg1;
- (void)cancel;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 redownloadParametersString:(id)arg2;
- (id)initWithRequestContext:(id)arg1 redownloadParameters:(id)arg2;
- (id)init;

@end

