//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject
{
}

+ (id)sharedUIKitDelegate;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3;
- (void)webViewDidDrawTiles:(id)arg1;
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;
- (_Bool)isUnperturbedDictationResultMarker:(id)arg1;
- (long long)getPasteboardChangeCount;
- (_Bool)performTwoStepDrop:(id)arg1 atDestination:(id)arg2 isMove:(_Bool)arg3;
- (_Bool)performsTwoStepPaste:(id)arg1;
- (_Bool)hasRichlyEditableSelection;
- (int)deviceOrientation;
- (void)showPlaybackTargetPicker:(_Bool)arg1 fromRect:(struct CGRect)arg2;
- (struct CGPoint)interactionLocation;
- (id)supportedPasteboardTypesForCurrentSelection;
- (long long)getPasteboardItemsCount;
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;
- (void)writeDataToPasteboard:(id)arg1;
- (id)checkSpellingOfString:(id)arg1;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 configuration:(id)arg3;
- (void)webViewDidEndOverflowScroll:(id)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg1;
- (void)webViewDidLayout:(id)arg1;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4;
- (void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(_Bool)arg6 allowVerticalScrollbar:(_Bool)arg7;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;
- (void)deleteFromInputWithFlags:(unsigned long long)arg1;
- (void)deleteFromInput;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;
- (_Bool)handleKeyCommandForCurrentEvent;
- (void)webView:(id)arg1 didReceiveMessage:(id)arg2;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)webViewDidReceiveMobileDocType:(id)arg1;
- (void)webViewDidRestoreFromPageCache:(id)arg1;
- (void)webView:(id)arg1 elementDidBlurNode:(id)arg2;
- (void)webView:(id)arg1 elementDidFocusNode:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 willCloseFrame:(id)arg2;
- (_Bool)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(_Bool)arg4;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (struct CGRect)documentVisibleRectForWebView:(id)arg1;
- (struct CGPoint)contentsPointForWebView:(id)arg1;

@end

