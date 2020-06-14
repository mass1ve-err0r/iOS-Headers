//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIPDFAnnotationControllerDelegate-Protocol.h>
#import <UIKitCore/UIPDFPageViewDelegate-Protocol.h>
#import <UIKitCore/UIPopoverControllerDelegate-Protocol.h>
#import <UIKitCore/WebPDFViewPlaceholderDelegate-Protocol.h>

@class NSArray, NSData, NSMutableArray, NSObject, NSString, NSURL, UIColor, UIPDFDocument, UITapGestureRecognizer, WebPDFViewPlaceholder;
@protocol UIWebPDFViewDelegate;

@interface UIWebPDFView : UIView <UIPDFPageViewDelegate, UIPDFAnnotationControllerDelegate, WebPDFViewPlaceholderDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate>
{
    NSMutableArray *_backingLayerImageViews;
    struct CGPDFDocument *_cgPDFDocument;
    UIPDFDocument *_document;
    _Bool _hasScheduledCacheUpdate;
    struct CGRect _documentBounds;
    NSObject<UIWebPDFViewDelegate> *_pdfDelegate;
    _Bool _delegateRespondsToDidScroll;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSURL *_documentURL;
    _Bool _rotating;
    _Bool _zooming;
    double _initialZoomScale;
    struct CGAffineTransform _documentTransform;
    double _documentScale;
    long long _ignoreContentOffsetChanges;
    struct CGPoint _contentOffsetAtScrollStart;
    NSMutableArray *_pageViews;
    NSArray *_pageMinYs;
    _Bool hidePageViewsUntilReadyToRender;
    _Bool hideActivityIndicatorForUnRenderedContent;
    _Bool readyForSnapshot;
    WebPDFViewPlaceholder *pdfPlaceHolderView;
    UIColor *backgroundColorForUnRenderedContent;
    NSString *documentPassword;
    NSArray *pageRects;
}

+ (void)setAsPDFDocRepAndView;
+ (void)initialize;
@property(retain, nonatomic) NSArray *pageMinYs; // @synthesize pageMinYs=_pageMinYs;
@property(nonatomic) _Bool readyForSnapshot; // @synthesize readyForSnapshot;
@property(retain, nonatomic) NSArray *pageRects; // @synthesize pageRects;
@property(retain, nonatomic) NSString *documentPassword; // @synthesize documentPassword;
@property(nonatomic) _Bool hideActivityIndicatorForUnRenderedContent; // @synthesize hideActivityIndicatorForUnRenderedContent;
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // @synthesize backgroundColorForUnRenderedContent;
@property(nonatomic) _Bool hidePageViewsUntilReadyToRender; // @synthesize hidePageViewsUntilReadyToRender;
@property(nonatomic) long long ignoreContentOffsetChanges; // @synthesize ignoreContentOffsetChanges=_ignoreContentOffsetChanges;
@property WebPDFViewPlaceholder *pdfPlaceHolderView; // @synthesize pdfPlaceHolderView;
@property(readonly, nonatomic) double documentScale; // @synthesize documentScale=_documentScale;
@property(nonatomic) struct CGAffineTransform documentTransform; // @synthesize documentTransform=_documentTransform;
@property(nonatomic) double initialZoomScale; // @synthesize initialZoomScale=_initialZoomScale;
@property(readonly, nonatomic) struct CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
@property(nonatomic) NSObject<UIWebPDFViewDelegate> *pdfDelegate; // @synthesize pdfDelegate=_pdfDelegate;
@property(retain, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (id)imageForContactRect:(struct CGRect)arg1 onPageInViewRect:(struct CGRect)arg2 destinationRect:(struct CGRect)arg3;
- (unsigned long long)_pageNumberForRect:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (void)_share:(id)arg1;
- (void)_define:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)_selection;
- (id)_pageWithSelection;
- (void)clearSelection;
- (void)annotation:(id)arg1 isBeingPressedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;
- (void)annotation:(id)arg1 wasTouchedAtPoint:(struct CGPoint)arg2 controller:(id)arg3;
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4;
- (void)_didLongPress:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToURL:(id)arg4;
- (void)_didTouch:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToPageIndex:(unsigned long long)arg4;
- (void)_didTouch:(id)arg1 inRect:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 linkingToURL:(id)arg4;
- (void)resetZoom:(id)arg1;
- (void)zoom:(id)arg1 to:(struct CGRect)arg2 atPoint:(struct CGPoint)arg3 kind:(int)arg4;
- (void)didCompleteLayout;
- (void)_recreateUIPDFDocument;
- (_Bool)_checkIfDocumentNeedsUnlock;
- (_Bool)_tryToUnlockDocumentWithPassword:(id)arg1;
- (void)viewWillClose;
- (void)snapshotComplete;
- (void)prepareForSnapshot:(_Bool)arg1;
- (unsigned long long)firstVisiblePageNumber;
- (void)didZoom:(id)arg1;
- (void)willZoom:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)_didScroll;
- (void)willScroll:(id)arg1;
- (void)ensureCorrectPagesAreInstalled:(_Bool)arg1;
- (void)_scheduleRemovePageViewsNotInViewCoordsRect;
- (void)_removePageViewsNotInCurrentViewCoordsRect;
- (void)_removePageViewsNotInViewCoordsRect:(struct CGRect)arg1;
- (id)_addPageAtIndex:(unsigned long long)arg1;
- (void)_addSubViewsInViewCoordsBounds:(struct CGRect)arg1 force:(_Bool)arg2;
- (id)_installViewAtIndex:(long long)arg1 inFrame:(struct CGRect)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)_viewCachingBoundsInUIViewCoords;
- (struct CGRect)_viewportBoundsInUIViewCoords;
- (struct CGRect)_viewportBoundsInUIVIewCoordsWithView:(id)arg1;
- (id)viewportView;
- (id)viewAtIndex:(long long)arg1;
- (void)dealloc;
- (void)_removeBackgroundImageObserverIfNeeded:(id)arg1;
- (id)initWithWebPDFViewPlaceholder:(id)arg1;
@property(readonly, nonatomic) NSData *documentData;
@property(readonly, nonatomic) UIPDFDocument *document;
- (id)uiPDFDocument;
@property(readonly, nonatomic) struct CGPDFDocument *cgPDFDocument;
- (_Bool)_hasPageRects;
@property(readonly, nonatomic) unsigned long long totalPages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

