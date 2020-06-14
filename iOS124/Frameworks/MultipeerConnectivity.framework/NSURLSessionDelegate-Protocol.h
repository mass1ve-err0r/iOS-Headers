//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MultipeerConnectivity/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, NSURLSession;

@protocol NSURLSessionDelegate <NSObject>

@optional
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)arg1;
- (void)URLSession:(NSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(NSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end

