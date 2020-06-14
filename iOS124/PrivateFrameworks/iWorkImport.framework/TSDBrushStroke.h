//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDSmartStroke.h>

__attribute__((visibility("hidden")))
@interface TSDBrushStroke : TSDSmartStroke
{
}

+ (_Bool)p_usesMetal;
+ (void)p_clearFrameBuffers:(id)arg1;
+ (void)p_drawFrameBuffers:(id)arg1 intoFrameBuffer:(id)arg2 withAlpha:(double)arg3 usingDataBuffer:(id)arg4;
+ (id)p_glOpacityShaderForCurrentContext;
+ (id)p_glBrushShaderForCurrentContext;
+ (id)p_glContextArray;
+ (id)p_glContextQueue;
+ (id)p_glContextSemaphore;
+ (unsigned long long)p_glContextCount;
+ (_Bool)brushStrokeUsesOpenGL;
+ (Class)mutableClass;
- (struct CGImage *)p_newCGImageFromGLWithWidth:(int)arg1 height:(int)arg2;
- (id)p_glTextureForCurrentStrokeAndContext;
- (long long)p_fastElementPercentage:(double *)arg1 forOverallPercentage:(double)arg2 onPath:(id)arg3 withCachedCurrentElementPercentage:(CDStruct_45a6b6f8 *)arg4;
- (_Bool)p_isFreehandDrawingStrokeWithFixedTileWidth;
- (_Bool)p_drawsToPDFAsBitmap;
- (void)p_finishOpenGLRenderInContext:(struct CGContext *)arg1 orDirectly:(id)arg2 pathVertexData:(vector_8bba9095 *)arg3 parameterized:(_Bool)arg4 shouldReverseDrawOrder:(_Bool)arg5 withLayoutOptions:(id)arg6;
- (void)p_rasterRenderSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 inElementRange:(struct _NSRange)arg4 into:(vector_8bba9095 *)arg5 viewScale:(double)arg6 strokeTileLayout:(CDStruct_d2b197d1)arg7 cachedCurrentElementPercentage:(CDStruct_45a6b6f8 *)arg8;
- (void)p_rasterBrushPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 orDirectly:(id)arg3 parameterized:(_Bool)arg4 shouldReverseDrawOrder:(_Bool)arg5 withLayoutOptions:(id)arg6;
- (void)p_brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 inElementRange:(struct _NSRange)arg4 intoPath:(id)arg5 orIntoVector:(vector_8bba9095 *)arg6 viewScale:(double)arg7 strokeTileLayout:(CDStruct_d2b197d1)arg8 cachedCurrentElementPercentage:(CDStruct_45a6b6f8 *)arg9;
- (void)p_brushPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 intoPath:(id)arg4 orIntoVector:(vector_8bba9095 *)arg5 sectionIndex:(unsigned long long *)arg6 viewScale:(double)arg7 withLayoutOptions:(id)arg8 currentSubpathIndex:(unsigned long long)arg9 cachedCurrentElementPercentage:(CDStruct_45a6b6f8 *)arg10;
- (void)p_brushPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 orDirectly:(id)arg3 parameterized:(_Bool)arg4 drawRasterized:(_Bool)arg5 shouldReverseDrawOrder:(_Bool)arg6 withLayoutOptions:(id)arg7;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4 parameterized:(_Bool)arg5 shouldReverseDrawOrder:(_Bool)arg6 withLayoutOptions:(id)arg7;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4 parameterized:(_Bool)arg5 shouldReverseDrawOrder:(_Bool)arg6;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (id)strokeLineEnd:(id)arg1;
- (_Bool)needsToExtendJoinsForBoundsCalculation;
- (double)horizontalMarginForSwatch;
- (void)i_setCap:(int)arg1;
- (int)cap;
- (_Bool)supportsPattern;
- (_Bool)usesOpenGL;
- (_Bool)drawsInOneStep;
- (_Bool)prefersToApplyToShapeRenderableDuringManipulation;
- (_Bool)canApplyToShapeRenderable;
- (double)suggestedMinimumLineWidth;
- (double)lineEndInsetAdjustment;
- (id)description;
- (id)initWithArchive:(const struct StrokeArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

