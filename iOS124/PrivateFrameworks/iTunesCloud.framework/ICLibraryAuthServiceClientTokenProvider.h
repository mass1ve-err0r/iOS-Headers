//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_delayQueue;
    NSString *_cachedClientToken;
    NSDate *_cachedClientTokenExpiration;
    NSNumber *_cachedDSID;
    CDUnknownBlockType _requestDelayBlock;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)_userIdentityStoreDidChangeNotification:(id)arg1;
- (id)_activeAccountDSID;
- (void)_handleTokenResponse:(id)arg1 tokenRequest:(id)arg2;
- (void)_handleRequestTokenForExternalRequest:(_Bool)arg1;
- (CDUnknownBlockType)_requestTokenWithDelay:(long long)arg1 forExternalRequest:(_Bool)arg2;
- (void)_handleITunesStoreAccountsChanged;
- (id)cachedTokenAndResetCache:(_Bool)arg1;
- (id)init;

@end

