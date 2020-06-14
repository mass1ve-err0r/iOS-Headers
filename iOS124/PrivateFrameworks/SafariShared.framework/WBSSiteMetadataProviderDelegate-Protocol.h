//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSSiteMetadataRequest, WBSSiteMetadataResponse, WKWebView, WKWebViewConfiguration;
@protocol NSFastEnumeration, WBSSiteMetadataProvider;

@protocol WBSSiteMetadataProviderDelegate <NSObject>
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (WKWebView *)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 webViewOfSize:(struct CGSize)arg2 withConfiguration:(WKWebViewConfiguration *)arg3;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 cancelRequestsWithTokens:(id <NSFastEnumeration>)arg2;
- (id)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 registerOneTimeRequest:(WBSSiteMetadataRequest *)arg2 priority:(long long)arg3 responseHandler:(void (^)(WBSSiteMetadataResponse *))arg4;
- (id)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 registerRequest:(WBSSiteMetadataRequest *)arg2 priority:(long long)arg3 responseHandler:(void (^)(WBSSiteMetadataResponse *))arg4;
- (void)siteMetadataProvider:(id <WBSSiteMetadataProvider>)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 ofType:(long long)arg3 didReceiveNewData:(_Bool)arg4 forRequest:(WBSSiteMetadataRequest *)arg5;
@end

