//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>

@class NSObject, NSString, SKUIActivityIndicatorView, SKUIActivityIndicatorViewElement, SKUILayoutCache, SKUILoadingTemplateViewElement, SKUIViewElementLayoutContext;
@protocol OS_dispatch_source;

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController>
{
    SKUIActivityIndicatorViewElement *_activityIndicatorElement;
    SKUIActivityIndicatorView *_activityIndicatorView;
    NSObject<OS_dispatch_source> *_delayTimer;
    SKUILayoutCache *_layoutCache;
    SKUILoadingTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

- (void).cxx_destruct;
- (id)_viewLayoutContext;
- (struct CGRect)_computedFrameForActivityIndicatorView;
- (void)_showActivityIndicator;
- (void)_reloadViewStyling;
- (id)_layoutCache;
- (id)_activityIndicator;
- (void)documentDidUpdate:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;
- (id)initWithActivityIndicatorElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

