//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognizer, NSMutableArray, PKDrawing;

__attribute__((visibility("hidden")))
@interface TSKPKDrawing : NSObject
{
    double _pencilAnnotationDrawingScale;
    PKDrawing *_pencilKitDrawing;
    CHRecognizer *_textRecognizer;
    CHRecognizer *_lineRecognizer;
    struct CGRect _cachedRenderedFrame;
}

+ (id)p_strokesForPencilKitDrawing:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) CHRecognizer *lineRecognizer; // @synthesize lineRecognizer=_lineRecognizer;
@property(retain, nonatomic) CHRecognizer *textRecognizer; // @synthesize textRecognizer=_textRecognizer;
@property(nonatomic) struct CGRect cachedRenderedFrame; // @synthesize cachedRenderedFrame=_cachedRenderedFrame;
@property(retain, nonatomic) PKDrawing *pencilKitDrawing; // @synthesize pencilKitDrawing=_pencilKitDrawing;
@property(readonly, nonatomic) double pencilAnnotationDrawingScale; // @synthesize pencilAnnotationDrawingScale=_pencilAnnotationDrawingScale;
- (void).cxx_destruct;
- (id)description;
- (struct CGRect)convertStrokeToUnscaledCanvasRect:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledCanvasToStrokeRect:(struct CGRect)arg1;
- (void)addSubStrokeFromStroke:(id)arg1 fromStartIndex:(unsigned long long)arg2 toEndIndex:(unsigned long long)arg3 andAdjustStart:(_Bool)arg4 andAdjustEnd:(_Bool)arg5 toEdgesOfRect:(struct CGRect)arg6;
- (_Bool)hasLargeVerticalLineAnchorStroke;
- (_Bool)hasLargeBracketAnchorStroke;
- (id)p_paragraphAnnotationAnchorComponentsPassingFilterBlock:(CDUnknownBlockType)arg1;
- (_Bool)isText:(id)arg1;
- (_Bool)isRectangle;
- (_Bool)isCircle;
- (_Bool)isHorizontalLine;
- (_Bool)isVerticalLine;
- (_Bool)isLine;
- (_Bool)isXMark;
- (struct CGPoint)averageUnscaledCenterPoint;
- (id)p_drawingByTransformingByDeltaPosition:(struct CGPoint)arg1;
- (id)p_drawingByCroppingToClipRect:(struct CGRect)arg1;
- (id)drawingByCroppingToClipRect:(struct CGRect)arg1;
- (id)drawingByScaling:(struct CGSize)arg1 andMovingByDelta:(struct CGPoint)arg2 andCroppingToClipRect:(struct CGRect)arg3;
- (id)drawingByScaling:(struct CGSize)arg1 andMovingByDelta:(struct CGPoint)arg2;
- (id)drawingByScaling:(struct CGSize)arg1;
- (id)drawingByFilteringStrokesWithFilter:(CDUnknownBlockType)arg1;
- (id)renderImageWithContentsScale:(double)arg1 drawingScale:(double)arg2 drawingFrame:(struct CGRect)arg3;
- (id)renderImageWithContentsScale:(double)arg1 drawingScale:(double)arg2;
- (id)renderImageWithContentsScale:(double)arg1;
@property(readonly, nonatomic) struct CGRect incorrectUnscaledFastFrame;
- (struct CGRect)p_incorrectPencilCoordinatesFastFrame;
@property(readonly, nonatomic) struct CGRect unscaledRenderedFrame;
- (struct CGRect)renderedFrame;
@property(readonly, nonatomic) struct CGSize estimatedExcessPaddingOnIncorrectUnscaledFastFrame;
- (struct UIEdgeInsets)p_transparencyInsetsForCGImage:(struct CGImage *)arg1;
- (id)copyAndAddStroke:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)copyAndAddStroke:(id)arg1;
- (void)copyAndAddStrokes:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *strokes;
- (id)PKDrawing;
- (id)CHDrawing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 pencilAnnotationDrawingScale:(double)arg2;
- (id)initWithPKDrawing:(id)arg1 pencilAnnotationDrawingScale:(double)arg2;
- (id)initWithPKDrawing:(id)arg1 cachedRenderedFrame:(struct CGRect)arg2 pencilAnnotationDrawingScale:(double)arg3;
- (id)initWithStrokes:(id)arg1;
- (id)initWithStrokes:(id)arg1 cachedRenderedFrame:(struct CGRect)arg2;
- (id)initWithPencilAnnotationDrawingScale:(double)arg1;

@end

