//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AnnotationKit/PKCanvasViewDelegate-Protocol.h>

@class AKPageController, NSHashTable, NSString, PKCanvasView, PKInk, UIGestureRecognizer;
@protocol AKInkOverlayViewDelegate;

@interface AKInkOverlayView : UIView <PKCanvasViewDelegate>
{
    PKInk *_ink;
    NSHashTable *_reportedStrokes;
    AKPageController *_pageController;
    id _drawingUndoTarget;
    PKCanvasView *_canvasView;
    id <AKInkOverlayViewDelegate> _delegate;
    struct CGSize _canvasSizeInPKDrawingSpace;
}

+ (id)newDrawingUndoTargetWithPageController:(id)arg1;
+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
@property struct CGSize canvasSizeInPKDrawingSpace; // @synthesize canvasSizeInPKDrawingSpace=_canvasSizeInPKDrawingSpace;
@property __weak id <AKInkOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property __weak id drawingUndoTarget; // @synthesize drawingUndoTarget=_drawingUndoTarget;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *drawingGestureRecognizer;
- (void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
- (void)canvasViewDidCancelStroke:(id)arg1;
- (void)canvasViewDidEndStroke:(id)arg1;
- (void)canvasViewDidBeginNewStroke:(id)arg1;
- (_Bool)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;
- (void)_calculateFixedPixelSize:(struct CGSize *)arg1 drawingScale:(double *)arg2;
- (void)layoutSubviews;
- (void)setupInkView;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)removeStrokesFromDrawing:(id)arg1;
- (void)_updateCanvasViewInk;
@property(copy) PKInk *ink;
- (void)teardown;
- (void)commonPostInit;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

