//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, NSString, UIColor, UIPDFAnnotation, UIPDFMarkupAnnotation, UIPDFPageView;
@protocol NSObject><UIPDFAnnotationControllerDelegate;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate>
{
    UIPDFPageView *_pageView;
    struct os_unfair_lock_s _lock;
    struct CGPoint _startPoint;
    _Bool _moving;
    UIPDFMarkupAnnotation *_currentAnnotation;
    CDStruct_627e0f85 _initialRange;
    _Bool _tracking;
    CALayer *_drawingSurface;
    id <NSObject><UIPDFAnnotationControllerDelegate> _delegate;
    struct CGSize _cachedMarginNoteSize;
    _Bool makeUnderlineAnnotation;
    _Bool _allowEditing;
    UIColor *_currentColor;
}

+ (struct CGImage *)newMaskImage:(struct CGPDFPage *)arg1 size:(struct CGSize)arg2;
+ (id)newAnnotation:(struct CGPDFDictionary *)arg1 type:(const char *)arg2;
+ (_Bool)pageHasAnnotations:(id)arg1;
@property(nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
@property(nonatomic) _Bool allowEditing; // @synthesize allowEditing=_allowEditing;
@property(readonly, nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
@property(readonly, nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) id <NSObject><UIPDFAnnotationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CALayer *drawingSurface; // @synthesize drawingSurface=_drawingSurface;
@property(nonatomic) _Bool makeUnderlineAnnotation; // @synthesize makeUnderlineAnnotation;
@property(retain, nonatomic) UIPDFAnnotation *currentAnnotation; // @synthesize currentAnnotation=_currentAnnotation;
- (id)marginNoteImage:(id)arg1;
- (struct CGSize)marginNoteImageSize;
- (struct CGImage *)underlineImageFor:(struct CGRect)arg1;
- (struct CGImage *)newHighlightMaskImageFor:(struct CGRect)arg1;
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;
- (id)annotatePageSelection;
- (_Bool)willDoSomethingWithTap:(struct CGPoint)arg1;
- (_Bool)annotationLongPressRecognized:(id)arg1;
- (_Bool)annotationSingleTapRecognized:(id)arg1;
- (_Bool)annotationBriefPressRecognized:(id)arg1;
- (id)linkAnnotationAt:(struct CGPoint)arg1;
- (id)annotationAt:(struct CGPoint)arg1;
- (_Bool)linkAnnotationShouldBegin:(id)arg1;
- (_Bool)isLinkAnnotationAt:(struct CGPoint)arg1;
- (id)_linkAnnotationViewAt:(struct CGPoint)arg1;
- (void)didEndTrackingAtPoint:(struct CGPoint)arg1;
- (void)endTrackingAtPoint:(struct CGPoint)arg1;
- (void)tracking:(struct CGPoint)arg1;
- (void)startTracking:(struct CGPoint)arg1;
- (_Bool)willTrackAtPoint:(struct CGPoint)arg1;
- (void)_initialRange:(struct CGPoint)arg1;
- (_Bool)trackMoved:(struct CGPoint)arg1;
- (_Bool)madeInstantAnnotation;
- (void)mergeSelectionOfAnnotation:(id)arg1;
- (_Bool)isSelection:(struct CGPDFSelection *)arg1 equalTo:(struct CGPDFSelection *)arg2;
- (_Bool)intersects:(struct CGPDFSelection *)arg1 with:(struct CGPDFSelection *)arg2;
- (void)annotationTapRecognized:(id)arg1;
- (void)linkPressRecognized:(id)arg1;
- (void)resetBeingPressedForRecognizer:(id)arg1 withDelegate:(id)arg2 withAnnotation:(id)arg3;
- (void)doubleTapRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)drawAnnotations:(struct CGContext *)arg1;
- (void)setNeedsDisplay;
- (void)setView:(id)arg1;
- (void)layoutAnnotationViews:(id)arg1;
- (void)_addAnnotationViewFor:(id)arg1;
- (void)_addLinkAnnotationViewFor:(id)arg1;
- (void)_addRecognizers:(id)arg1;
- (void)hostViewDidScroll;
- (void)setSurfacePosition:(id)arg1;
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toSurfaceLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toSurfaceLayer:(id)arg2;
- (void)addLinkAnnotationViews;
- (_Bool)willHandleTouchGestureAtPoint:(struct CGPoint)arg1;
- (void)addAnnotation:(id)arg1;
- (void)dealloc;
- (id)initWithPageView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

