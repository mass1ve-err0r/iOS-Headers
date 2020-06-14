//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation
{
    _Bool _allowsFuseHeaderEnrichment;
    ICMusicSubscriptionStatusRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(nonatomic) _Bool allowsFuseHeaderEnrichment; // @synthesize allowsFuseHeaderEnrichment=_allowsFuseHeaderEnrichment;
@property(readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1;
- (void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(_Bool)arg3 maximumRetryCount:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)execute;
- (id)initWithRequest:(id)arg1;

@end

