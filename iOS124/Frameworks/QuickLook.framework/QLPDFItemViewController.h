//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLMarkupItemViewController.h>

#import <QuickLook/QLPrintingProtocol-Protocol.h>

@class QLPrintSession;

__attribute__((visibility("hidden")))
@interface QLPDFItemViewController : QLMarkupItemViewController <QLPrintingProtocol>
{
    _Bool _isFullScreen;
    QLPrintSession *_currentPrintSession;
}

+ (_Bool)providesCustomPrinter;
+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (void)_setupPrintSessionWithSize:(struct CGSize)arg1;
- (void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDrawingPages:(struct _NSRange)arg1 ofSize:(struct CGSize)arg2;
- (void)numberOfPagesWithSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)printer;
- (_Bool)automaticallyUpdateScrollViewIndicatorInset;
- (_Bool)automaticallyUpdateScrollViewContentInset;
- (_Bool)automaticallyUpdateScrollViewContentOffset;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (id)scrollView;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canSwipeToDismiss;
- (void)_updatePeekSize;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionWillFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (id)transitioningView;
- (struct UIEdgeInsets)customSketchOverlayInsets;
- (struct UIEdgeInsets)customEdgeInsets;
- (_Bool)controller:(id)arg1 shouldOpenLinkAtURL:(id)arg2;
- (void)_updateThumbnailViewWithTraitCollection:(id)arg1;
- (void)_updateThumbnailView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;

@end

