//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOMapsAuthServiceHelper : NSObject
{
}

+ (id)sharedAuthHelper;
- (void)handleSecureProxyChallenge:(id)arg1;
- (void)addProxyAuthHeaderOrReAuth:(id)arg1 authProxyURL:(id)arg2;
- (void)setConnectionProxyDictionary:(id)arg1 url:(id)arg2 proxyURL:(id)arg3;
- (_Bool)_checkACTokenResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(_Bool)arg4;
- (_Bool)_checkMRTResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 suppressNotification:(_Bool)arg4;
- (void)doEnvironmentSwitchCheck:(id)arg1 authProxyURL:(id)arg2 suppressNotification:(_Bool)arg3;
- (_Bool)_successReplacingTokensFromData:(id)arg1;
- (long long)_statusCodeFromResponse:(id)arg1;
- (void)renewMapsAuthProxyToken:(unsigned long long)arg1 fromToken:(id)arg2 authProxyURL:(id)arg3 suppressNotification:(_Bool)arg4;
- (void)sendProxyAuthNotification:(long long)arg1;
- (void)removeMapsAuthDidFinishObserver:(id)arg1;
- (void)addMapsAuthDidFinishObserver:(id)arg1;
- (id)_tokenTypeString:(unsigned long long)arg1;

@end

