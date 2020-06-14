//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSError, NSURLRequest, UIWebView;

@protocol UIWebViewDelegate <NSObject>

@optional
- (void)webView:(UIWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(UIWebView *)arg1;
- (void)webViewDidStartLoad:(UIWebView *)arg1;
- (_Bool)webView:(UIWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

