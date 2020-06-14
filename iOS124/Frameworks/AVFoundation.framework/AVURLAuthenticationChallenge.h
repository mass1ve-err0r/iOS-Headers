//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLAuthenticationChallenge.h>

#import <AVFoundation/AVAssetResourceLoaderRequest-Protocol.h>

@class AVWeakReference, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVURLAuthenticationChallenge : NSURLAuthenticationChallenge <AVAssetResourceLoaderRequest>
{
    AVWeakReference *_weakReference;
    NSDictionary *_requestDictionary;
    unsigned long long _requestID;
    struct __CFDictionary *_requestInfo;
}

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;
@property(readonly, nonatomic) struct __CFDictionary *_requestInfo; // @synthesize _requestInfo;
- (void)_performCancellationByClient;
- (_Bool)_shouldInformDelegateOfFigCancellation;
@property(readonly, nonatomic) unsigned long long _requestID;
- (id)_requestDictionary;
- (id)_weakReference;
- (void)dealloc;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestInfo:(struct __CFDictionary *)arg3 requestID:(unsigned long long *)arg4;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 requestDictionary:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

