//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSWebViewMetadataFetchOperation, WKWebView, WKWebViewConfiguration;

@protocol WBSWebViewMetadataFetchOperationDelegate <NSObject>
- (void)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 didFinishUsingWebView:(WKWebView *)arg2;
- (WKWebView *)webViewMetadataFetchOperation:(WBSWebViewMetadataFetchOperation *)arg1 webViewOfSize:(struct CGSize)arg2 withConfiguration:(WKWebViewConfiguration *)arg3;
@end

