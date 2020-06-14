//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIScrollViewDelegate-Protocol.h>

@class NSString, UIWebView;
@protocol UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate>
{
    id <UIScrollViewDelegate> _delegate;
    UIWebView *_webView;
}

@property(nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

