//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIKBGradient, UIKBRenderGeometry, UIKBTextStyle;

__attribute__((visibility("hidden")))
@interface UIKBRenderTraits : NSObject <NSCopying>
{
    NSMutableArray *_renderEffects;
    NSMutableArray *_foregroundRenderEffects;
    _Bool _honorControlOpacity;
    _Bool _controlOpacities;
    _Bool _blurBlending;
    _Bool _renderSecondarySymbolsSeparately;
    UIKBRenderGeometry *_geometry;
    UIKBGradient *_backgroundGradient;
    UIKBGradient *_layeredBackgroundGradient;
    UIKBGradient *_layeredForegroundGradient;
    UIKBTextStyle *_symbolStyle;
    UIKBTextStyle *_fallbackSymbolStyle;
    NSArray *_secondarySymbolStyles;
    NSArray *_variantGeometries;
    UIKBRenderTraits *_variantTraits;
    UIKBRenderTraits *_highlightedVariantTraits;
    long long _blendForm;
    NSArray *_renderFlags;
    long long _renderFlagsForAboveEffects;
    NSString *_hashString;
}

+ (id)traitsWithSymbolStyle:(id)arg1;
+ (id)traitsWithGeometry:(id)arg1;
+ (id)emptyTraits;
@property(retain, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
@property(nonatomic) long long renderFlagsForAboveEffects; // @synthesize renderFlagsForAboveEffects=_renderFlagsForAboveEffects;
@property(nonatomic) _Bool renderSecondarySymbolsSeparately; // @synthesize renderSecondarySymbolsSeparately=_renderSecondarySymbolsSeparately;
@property(retain, nonatomic) NSArray *renderFlags; // @synthesize renderFlags=_renderFlags;
@property(nonatomic) long long blendForm; // @synthesize blendForm=_blendForm;
@property(nonatomic) _Bool blurBlending; // @synthesize blurBlending=_blurBlending;
@property(nonatomic) _Bool controlOpacities; // @synthesize controlOpacities=_controlOpacities;
@property(retain, nonatomic) UIKBRenderTraits *highlightedVariantTraits; // @synthesize highlightedVariantTraits=_highlightedVariantTraits;
@property(retain, nonatomic) UIKBRenderTraits *variantTraits; // @synthesize variantTraits=_variantTraits;
@property(retain, nonatomic) NSArray *variantGeometries; // @synthesize variantGeometries=_variantGeometries;
@property(readonly, nonatomic) NSArray *foregroundRenderEffects; // @synthesize foregroundRenderEffects=_foregroundRenderEffects;
@property(readonly, nonatomic) NSArray *renderEffects; // @synthesize renderEffects=_renderEffects;
@property(retain, nonatomic) NSArray *secondarySymbolStyles; // @synthesize secondarySymbolStyles=_secondarySymbolStyles;
@property(retain, nonatomic) UIKBTextStyle *fallbackSymbolStyle; // @synthesize fallbackSymbolStyle=_fallbackSymbolStyle;
@property(retain, nonatomic) UIKBTextStyle *symbolStyle; // @synthesize symbolStyle=_symbolStyle;
@property(retain, nonatomic) UIKBGradient *layeredForegroundGradient; // @synthesize layeredForegroundGradient=_layeredForegroundGradient;
@property(retain, nonatomic) UIKBGradient *layeredBackgroundGradient; // @synthesize layeredBackgroundGradient=_layeredBackgroundGradient;
@property(retain, nonatomic) UIKBGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) UIKBRenderGeometry *geometry; // @synthesize geometry=_geometry;
- (void)modifyForMasking;
- (void)overlayWithTraits:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)removeAllRenderEffects;
- (void)addForegroundRenderEffect:(id)arg1;
- (void)addRenderEffect:(id)arg1;

@end

