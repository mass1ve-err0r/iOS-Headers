//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class AKAppleIDSession, CoreDAVTask, NSData, NSDictionary, NSError, NSSet, NSString, NSURL, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace;
@protocol CoreDAVClientCertificateInfoProvider, CoreDAVOAuthInfoProvider;

@protocol CoreDAVAccountInfoProvider <NSObject>
- (_Bool)shouldFailAllTasks;
- (_Bool)handleCertificateError:(NSError *)arg1;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(void (^)(int))arg1;
- (NSString *)userAgentHeader;
- (NSSet *)serverComplianceClasses;
- (NSString *)accountID;
- (NSURL *)principalURL;
- (NSData *)identityPersist;
- (NSString *)password;
- (NSString *)user;
- (NSString *)serverRoot;
- (long long)port;
- (NSString *)host;
- (NSString *)scheme;

@optional
- (AKAppleIDSession *)getAppleIDSession;
- (void)webLoginRequestedAtURL:(NSURL *)arg1 reasonString:(NSString *)arg2 completionBlock:(void (^)(int))arg3;
- (NSString *)clientToken;
- (void)clientTokenRequestedByServer;
- (_Bool)shouldCompressRequests;
- (_Bool)shouldUseOpportunisticSockets;
- (struct __CFURLStorageSession *)copyStorageSession;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1 forTask:(CoreDAVTask *)arg2;
- (void)noteFailedProtocolRequestForTask:(CoreDAVTask *)arg1;
- (void)noteFailedNetworkRequestForTask:(CoreDAVTask *)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 forTask:(CoreDAVTask *)arg2;
- (_Bool)renewCredential;
- (_Bool)shouldTryRenewingCredential;
- (_Bool)shouldTurnModalOnBadPassword;
- (_Bool)shouldSendClientInfoHeaderForURL:(NSURL *)arg1;
- (_Bool)shouldHandleHTTPCookiesForURL:(NSURL *)arg1;
- (void)noteHomeSetOnDifferentHost:(NSURL *)arg1;
- (_Bool)handleShouldUseCredentialStorage;
- (_Bool)shouldRetryUnauthorizedConnection:(NSURLConnection *)arg1;
- (_Bool)handleAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg1 withConnection:(NSURLConnection *)arg2;
- (_Bool)handleAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg1;
- (_Bool)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1 withConnection:(NSURLConnection *)arg2;
- (_Bool)handleTrustChallenge:(NSURLAuthenticationChallenge *)arg1;
- (id <CoreDAVOAuthInfoProvider>)oauthInfoProvider;
- (id <CoreDAVClientCertificateInfoProvider>)clientCertificateInfoProvider;
- (NSDictionary *)customConnectionProperties;
- (NSDictionary *)additionalHeaderValues;
@end

