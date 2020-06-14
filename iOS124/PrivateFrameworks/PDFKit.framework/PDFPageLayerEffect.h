//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffect : CALayer
{
    PDFPageLayerEffectPrivate *_private;
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect)arg1 withLayer:(id)arg2;
+ (id)createPDFSelectionLayerEffectsForSelection:(id)arg1 withLayer:(id)arg2;
- (void).cxx_destruct;
- (void)enableTextSelectionHandles;
- (void)clearTextSelectionHandles;
- (void)setLollipopMagnifierPagePoint:(struct CGPoint)arg1;
- (void)clearLollipopMagnifier;
- (void)setTextSelectionMagnifierPagePoint:(struct CGPoint)arg1;
- (void)clearTextSelectionMagnifier;
- (void)setSelection:(id)arg1;
- (id)selection;
- (id)annotation;
- (_Bool)shouldRotateContent;
- (void)update;
- (void)setPageFrame:(struct CGRect)arg1;
- (struct CGRect)pageFrame;
- (id)UUID;
- (id)initWithPDFPageLayer:(id)arg1;

@end

