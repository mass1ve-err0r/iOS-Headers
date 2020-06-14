//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/NSObject-Protocol.h>

@class NSCachedURLResponse, NSError, NSURL, NSURLAuthenticationChallenge, NSURLResponse, TPSURLSessionTask;

@protocol TPSURLSessionDelegate <NSObject>

@optional
- (void)sessionTask:(TPSURLSessionTask *)arg1 didReceiveResponse:(NSURLResponse *)arg2 completionHandler:(void (^)(long long, _Bool))arg3;
- (void)sessionTask:(TPSURLSessionTask *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
- (void)sessionTask:(TPSURLSessionTask *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2 completionHandler:(void (^)(NSCachedURLResponse *))arg3;
- (void)sessionTask:(TPSURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)sessionTask:(TPSURLSessionTask *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
@end

