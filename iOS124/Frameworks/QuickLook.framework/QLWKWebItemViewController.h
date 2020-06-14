//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/QLPrintingProtocol-Protocol.h>
#import <QuickLook/QLScrubViewDataSource-Protocol.h>
#import <QuickLook/QLScrubViewDelegate-Protocol.h>
#import <QuickLook/UIScrollViewDelegate-Protocol.h>
#import <QuickLook/WKNavigationDelegate-Protocol.h>

@class NSCache, NSLayoutConstraint, NSOperationQueue, NSString, QLScrubView, WBUPrintPageRenderer, WKWebView;
@protocol QLWebKitPaginator, QLWebKitThumbnailGenerator;

__attribute__((visibility("hidden")))
@interface QLWKWebItemViewController : QLItemViewController <WKNavigationDelegate, QLPrintingProtocol, QLScrubViewDataSource, QLScrubViewDelegate, UIScrollViewDelegate>
{
    NSString *_previewContentType;
    struct CGPoint _scrollViewTopOffset;
    CDUnknownBlockType _completionHandler;
    WBUPrintPageRenderer *_renderer;
    _Bool _fullScreen;
    id <QLWebKitThumbnailGenerator> _thumbnailGenerator;
    id <QLWebKitPaginator> _paginator;
    struct CGSize _pageSize;
    QLScrubView *_scrubView;
    long long _thumbnailCount;
    struct CGSize _thumbnailSize;
    NSLayoutConstraint *_scrubberRightConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
    NSOperationQueue *_operationQueue;
    NSCache *_indexToThumbnailsCache;
    WKWebView *_webView;
}

+ (_Bool)providesCustomPrinter;
+ (Class)transformerClass;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSCache *indexToThumbnailsCache; // @synthesize indexToThumbnailsCache=_indexToThumbnailsCache;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)_updateConstraintConstants:(_Bool)arg1;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (id)transitioningView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1 ofSize:(struct CGSize)arg2;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned long long)arg2;
- (void)_addThumbnailToCache:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_thumbnailAtIndex:(unsigned long long)arg1;
- (struct CGSize)scrubView:(id)arg1 pageSizeAtIndex:(unsigned long long)arg2;
- (void)scrubView:(id)arg1 thumbnailForPage:(long long)arg2 size:(struct CGSize)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (long long)numberOfPagesInScrubView:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)_webViewDidRequestPasswordForQuickLookDocument:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)_scrollToPage:(long long)arg1;
- (void)_hideScrubberIfNeeded:(_Bool)arg1;
- (unsigned long long)currentPageNumber;
- (void)_showScrubberIfNeeded:(_Bool)arg1 reloadThumbnails:(_Bool)arg2;
- (void)_updateScrubberForTraitCollection:(id)arg1 animated:(_Bool)arg2 reloadThumbnailsIfNeeded:(_Bool)arg3;
- (void)_updateScrubberVisibilityAnimated:(_Bool)arg1 reloadThumbnailsIfNeeded:(_Bool)arg2;
- (void)_updateScrubberVisibilityAnimated:(_Bool)arg1;
- (void)_prepareThumbnailView;
- (id)_renderer;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)printer;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)automaticallyUpdateScrollViewIndicatorInset;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_registerRemoteProxy;
- (id)scrubView;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

