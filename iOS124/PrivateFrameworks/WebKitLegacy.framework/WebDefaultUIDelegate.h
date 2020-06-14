//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebUIDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject <WebUIDelegate>
{
}

+ (id)sharedUIDelegate;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForSession:(id)arg2;
- (void)webViewSupportedOrientationsUpdated:(id)arg1;
- (id)webView:(id)arg1 generateReplacementFile:(id)arg2;
- (_Bool)webView:(id)arg1 shouldReplaceUploadFile:(id)arg2 usingGeneratedFilename:(id *)arg3;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)webView:(id)arg1 didScrollDocumentInFrameView:(id)arg2;
- (void)webView:(id)arg1 didDrawRect:(struct CGRect)arg2;
- (void)webView:(id)arg1 printFrameView:(id)arg2;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (_Bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (struct CGRect)webViewFrame:(id)arg1;
- (void)webView:(id)arg1 setFrame:(struct CGRect)arg2;
- (void)webView:(id)arg1 setResizable:(_Bool)arg2;
- (_Bool)webViewIsResizable:(id)arg1;
- (void)webView:(id)arg1 setStatusBarVisible:(_Bool)arg2;
- (_Bool)webViewIsStatusBarVisible:(id)arg1;
- (void)webView:(id)arg1 setToolbarsVisible:(_Bool)arg2;
- (_Bool)webViewAreToolbarsVisible:(id)arg1;
- (void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
- (id)webViewStatusText:(id)arg1;
- (void)webView:(id)arg1 setStatusText:(id)arg2;
- (void)webView:(id)arg1 makeFirstResponder:(id)arg2;
- (id)webViewFirstResponder:(id)arg1;
- (void)webViewUnfocus:(id)arg1;
- (void)webViewFocus:(id)arg1;
- (void)webViewClose:(id)arg1;
- (void)webViewShow:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 userGesture:(_Bool)arg3;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 windowFeatures:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

