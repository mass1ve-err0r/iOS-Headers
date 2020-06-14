//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUIShapeEffectStack : NSObject
{
    float _shapeOpacity;
    float _outputOpacity;
    unsigned int _outputBlendMode;
    unsigned long long _hueSaturationCount;
    CDStruct_2844c7c7 *_hueSaturation;
    unsigned long long _colorOverlayCount;
    CDStruct_073a3662 *_colorOverlay;
    unsigned long long _innerGradientCount;
    CDStruct_bdea167c *_innerGradient;
    unsigned long long _innerGlowCount;
    CDStruct_3d979a67 *_innerGlow;
    unsigned long long _innerShadowCount;
    CDStruct_a5d4af33 *_innerShadow;
    unsigned long long _outerGlowCount;
    CDStruct_265c7ca9 *_outerGlow;
    unsigned long long _engraveShadowCount;
    CDStruct_ca46f23f *_engraveShadow;
    unsigned long long _extraShadowCount;
    CDStruct_ca46f23f *_extraShadow;
    unsigned long long _bevelEmbossCount;
    CDStruct_c78fd0c4 *_emboss;
    float _scalefactor;
    int _renderStrategy;
}

+ (struct CGColor *)newColorByAdjustingLightnessOfColor:(struct CGColor *)arg1 darker:(_Bool)arg2;
+ (id)shapeEffectSingleBlurFrom:(id)arg1 withInteriorFill:(id)arg2 offset:(struct CGPoint)arg3 blurSize:(float)arg4 innerGlowRed:(float)arg5 innerGlowGreen:(float)arg6 innerGlowBlue:(float)arg7 innerGlowOpacity:(float)arg8 innerShadowRed:(float)arg9 innerShadowGreen:(float)arg10 innerShadowBlue:(float)arg11 innerShadowOpacity:(float)arg12 outerGlowRed:(float)arg13 outerGlowGreen:(float)arg14 outerGlowBlue:(float)arg15 outerGlowOpacity:(float)arg16 outerShadowRed:(float)arg17 outerShadowGreen:(float)arg18 outerShadowBlue:(float)arg19 outerShadowOpacity:(float)arg20 hasInsideShadowBlur:(_Bool)arg21 hasOutsideShadowBlur:(_Bool)arg22;
+ (id)hueSaturationFrom:(id)arg1 withCenterAngle:(double)arg2 width:(double)arg3 tintRed:(float)arg4 tintGreen:(float)arg5 tintBlue:(float)arg6;
+ (id)bevelEmbossFrom:(id)arg1 withSize:(unsigned int)arg2 soften:(unsigned int)arg3 angle:(float)arg4 altitude:(float)arg5 highlightRed:(float)arg6 highlightGreen:(float)arg7 highlightBlue:(float)arg8 highlightOpacity:(float)arg9 shadowRed:(float)arg10 shadowGreen:(float)arg11 shadowBlue:(float)arg12 shadowOpacity:(float)arg13 bevelStyle:(unsigned int)arg14;
+ (id)outerShadowFrom:(id)arg1 withOffset:(struct CGPoint)arg2 size:(unsigned int)arg3 spread:(unsigned int)arg4 red:(float)arg5 green:(float)arg6 blue:(float)arg7 opacity:(float)arg8;
+ (id)outerGlowFrom:(id)arg1 withSize:(unsigned int)arg2 spread:(unsigned int)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)innerShadowFrom:(id)arg1 withOffset:(struct CGPoint)arg2 radius:(float)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)innerGlowFrom:(id)arg1 withRadius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6;
+ (id)imageFromBlendWithMask:(id)arg1 foreground:(id)arg2 background:(id)arg3;
+ (id)shadowFrom:(id)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5;
+ (id)gradientWithParameters:(CDStruct_bdea167c *)arg1 inRect:(struct CGRect)arg2;
+ (id)rectangle:(struct CGRect)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithGray:(float)arg1 alpha:(float)arg2;
+ (id)blur:(id)arg1 radius:(float)arg2;
+ (id)invert:(id)arg1;
+ (id)image:(id)arg1 withOpacity:(float)arg2;
+ (id)blend:(id)arg1 over:(id)arg2 blendKind:(unsigned int)arg3;
+ (id)composite:(id)arg1 atop:(id)arg2;
+ (id)composite:(id)arg1 outOf:(id)arg2;
+ (id)composite:(id)arg1 into:(id)arg2;
+ (id)composite:(id)arg1 over:(id)arg2;
+ (id)unsharpMask:(id)arg1 radius:(float)arg2 intensity:(float)arg3;
+ (id)pixelZoomed:(id)arg1 scale:(int)arg2 about:(struct CGPoint)arg3;
+ (id)adjustOpacity:(id)arg1 by:(float)arg2;
+ (id)offset:(id)arg1 by:(struct CGPoint)arg2;
+ (id)sharedCIContext;
+ (id)preferredCIContextOptions;
@property(readonly, nonatomic) int renderStrategy; // @synthesize renderStrategy=_renderStrategy;
@property(readonly, nonatomic) float scalefactor; // @synthesize scalefactor=_scalefactor;
@property(readonly, nonatomic) CDStruct_c78fd0c4 *emboss; // @synthesize emboss=_emboss;
@property(readonly, nonatomic) unsigned long long bevelEmbossCount; // @synthesize bevelEmbossCount=_bevelEmbossCount;
@property(readonly, nonatomic) CDStruct_ca46f23f *extraShadow; // @synthesize extraShadow=_extraShadow;
@property(readonly, nonatomic) unsigned long long extraShadowCount; // @synthesize extraShadowCount=_extraShadowCount;
@property(readonly, nonatomic) CDStruct_ca46f23f *engraveShadow; // @synthesize engraveShadow=_engraveShadow;
@property(nonatomic) unsigned long long engraveShadowCount; // @synthesize engraveShadowCount=_engraveShadowCount;
@property(readonly, nonatomic) CDStruct_265c7ca9 *outerGlow; // @synthesize outerGlow=_outerGlow;
@property(readonly, nonatomic) unsigned long long outerGlowCount; // @synthesize outerGlowCount=_outerGlowCount;
@property(readonly, nonatomic) CDStruct_a5d4af33 *innerShadow; // @synthesize innerShadow=_innerShadow;
@property(nonatomic) unsigned long long innerShadowCount; // @synthesize innerShadowCount=_innerShadowCount;
@property(readonly, nonatomic) CDStruct_3d979a67 *innerGlow; // @synthesize innerGlow=_innerGlow;
@property(nonatomic) unsigned long long innerGlowCount; // @synthesize innerGlowCount=_innerGlowCount;
@property(readonly, nonatomic) CDStruct_bdea167c *innerGradient; // @synthesize innerGradient=_innerGradient;
@property(nonatomic) unsigned long long innerGradientCount; // @synthesize innerGradientCount=_innerGradientCount;
@property(readonly, nonatomic) CDStruct_073a3662 *colorOverlay; // @synthesize colorOverlay=_colorOverlay;
@property(nonatomic) unsigned long long colorOverlayCount; // @synthesize colorOverlayCount=_colorOverlayCount;
@property(readonly, nonatomic) CDStruct_2844c7c7 *hueSaturation; // @synthesize hueSaturation=_hueSaturation;
@property(readonly, nonatomic) unsigned long long hueSaturationCount; // @synthesize hueSaturationCount=_hueSaturationCount;
@property(readonly, nonatomic) float outputOpacity; // @synthesize outputOpacity=_outputOpacity;
@property(readonly, nonatomic) float shapeOpacity; // @synthesize shapeOpacity=_shapeOpacity;
@property(readonly) unsigned int outputBlendMode; // @synthesize outputBlendMode=_outputBlendMode;
- (id)cacheKey;
- (_Bool)expressableByColorFillCheckingOutputBlending:(_Bool)arg1;
- (struct CGColor *)newColorByProcessingColor:(struct CGColor *)arg1;
- (id)processedImageFromShapePath:(struct CGPath *)arg1 inRect:(struct CGRect)arg2;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1;
- (struct CGImage *)newFlattenedImageFromCGImage:(struct CGImage *)arg1 withScale:(double)arg2 ciContext:(id)arg3;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 ciContext:(id)arg3;
- (struct CGImage *)_newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 ciContext:(id)arg3 blendOverImage:(_Bool)arg4;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 cache:(_Bool)arg3;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2;
- (id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2 invertShadows:(_Bool)arg3;
- (id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2;
- (id)processedImageFromShapeImage:(id)arg1;
- (id)processedImageFromImage:(id)arg1 withScale:(double)arg2;
- (id)processedImageFromImage:(id)arg1;
- (CDStruct_3c058996)effectInsetsWithScale:(double)arg1;
- (struct CGRect)effectPaddingWithScale:(double)arg1;
- (id)compositeEffectStackWithShapeImage:(id)arg1 withScale:(double)arg2 blendOntoImage:(_Bool)arg3;
- (id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)arg1;
- (id)standardEffectCompositeWithShapeImage:(id)arg1 blendOntoImage:(_Bool)arg2;
- (void)adjustEffectColorsToTemperature:(int)arg1 onlyTintableColors:(_Bool)arg2;
- (void)scaleBrightnessOfEffectColorsByAmount:(double)arg1 onlyTintableColors:(_Bool)arg2;
- (void)applyCustomForegroundColor:(struct CGColor *)arg1 tintEffectColors:(_Bool)arg2;
- (void)applyCustomForegroundColor:(struct CGColor *)arg1;
- (_Bool)anyEffectAllowsTintSubstitution;
- (void)_normalizeEffectParameters;
- (void)scaleEffectParametersBy:(double)arg1;
- (void)updateOutputBlendingWithInteriorFillHeuristic;
- (int)cgBlendModeForOutputBlending;
- (id)imageWithBevelEmbossOfImage:(id)arg1 effect:(CDStruct_c78fd0c4)arg2;
- (id)imageWithExtraShadowOfImage:(id)arg1 effect:(CDStruct_ca46f23f)arg2;
- (id)imageWithEngraveShadowOfImage:(id)arg1 effect:(CDStruct_ca46f23f)arg2;
- (id)imageWithOuterGlowOfImage:(id)arg1 effect:(CDStruct_265c7ca9)arg2;
- (id)imageWithInteriorGradientFillOfImage:(id)arg1 effect:(CDStruct_bdea167c)arg2;
- (id)imageWithHueSaturationOfImage:(id)arg1 effect:(CDStruct_2844c7c7)arg2;
- (id)imageWithColorOverlayOfImage:(id)arg1 effect:(CDStruct_073a3662)arg2;
- (id)image:(id)arg1 withAdjustedOpacity:(float)arg2;
- (id)imageWithInnerShadowOfImage:(id)arg1 effect:(CDStruct_a5d4af33)arg2;
- (id)imageWithInnerGlowOfImage:(id)arg1 effect:(CDStruct_3d979a67)arg2;
- (id)imageWithSingleBlurShapeEffectOfImage:(id)arg1 withInteriorFill:(id)arg2;
- (id)effectPreset;
- (id)initWithEffectPreset:(id)arg1;
- (void)_updateRenderStrategyFromEffect:(unsigned int)arg1;
- (_Bool)_precompositeColorOverlayInnerGradient;
- (_Bool)hasHueSaturation;
- (void)_setHueSaturationAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (_Bool)hasEffects;
- (_Bool)hasBevelEmboss;
- (void)_setBevelEmbossAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (_Bool)hasExtraShadow;
- (void)_setExtraShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (_Bool)hasEngraveShadow;
- (void)_setEngraveShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (_Bool)hasOuterGlow;
- (void)_setOuterGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (_Bool)hasInnerShadow;
- (void)_setInnerShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (_Bool)hasInnerGlow;
- (void)_setInnerGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (float)innerGradientOpacity;
- (_Bool)hasInnerGradient;
- (void)_setInteriorGradientAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (float)colorOverlayOpacity;
- (_Bool)hasColorOverlay;
- (void)_setColorFillAtIndex:(unsigned long long)arg1 FromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setOutputOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setShapeOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_cleanupEffectSettings;
- (void)dealloc;

@end

