/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUICatalog : NSObject {
    NSString * _assetStoreName;
    NSBundle * _bundle;
    unsigned int  _fileHasDisplayGamutInKeySpace;
    NSCache * _localObjectCache;
    NSCache * _lookupCache;
    NSCache * _negativeCache;
    unsigned short  _preferredLocalization;
    unsigned int  _purgeWhenFinished;
    unsigned int  _reserved;
    NSMapTable * _storageMapTable;
    unsigned long long  _storageRef;
}

@property (nonatomic) unsigned long long storageRef;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(unsigned long long)arg5 layoutDirection:(unsigned long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(unsigned long long)arg4 deviceSubtype:(unsigned long long)arg5 sizeClassHorizontal:(long long)arg6 sizeClassVertical:(long long)arg7;
+ (id)bestMatchUsingObjects:(id)arg1 getAttributeValueUsing:(id /* block */)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 deploymentTarget:(long long)arg7 layoutDirection:(long long)arg8 sizeClassHorizontal:(long long)arg9 sizeClassVertical:(long long)arg10 memoryClass:(long long)arg11 graphicsFeatureSetClass:(long long)arg12 graphicsFallBackOrder:(id)arg13 deviceSubtypeFallBackOrder:(id)arg14;
+ (id)bestMatchUsingObjects:(id)arg1 getAttributeValueUsing:(id /* block */)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 deploymentTarget:(long long)arg7 layoutDirection:(long long)arg8 sizeClassHorizontal:(long long)arg9 sizeClassVertical:(long long)arg10 memoryClass:(long long)arg11 graphicsFeatureSetClass:(long long)arg12 graphicsFallBackOrder:(id)arg13 deviceSubtypeFallBackOrder:(id)arg14 platform:(long long)arg15;
+ (id)defaultUICatalogForBundle:(id)arg1;
+ (bool)isValidAssetStorageWithURL:(id)arg1;
+ (bool)isValidLCRWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (struct CGColor { }*)newColorByAdjustingLightnessOfColor:(struct CGColor { }*)arg1 darker:(bool)arg2;

- (long long)_appearanceIdentifierForName:(id)arg1;
- (id)_baseAtlasContentsKeyForName:(id)arg1;
- (id)_baseAtlasKeyForName:(id)arg1;
- (id)_baseColorKeyForName:(id)arg1;
- (id)_baseImageKeyForName:(id)arg1;
- (id)_baseKeyForName:(id)arg1;
- (id)_baseMultisizeImageSetKeyForName:(id)arg1;
- (id)_baseRecognitionGroupImageSetKeyForName:(id)arg1;
- (id)_baseRecognitionObjectKeyForName:(id)arg1;
- (id)_baseTextureKeyForName:(id)arg1;
- (id)_baseVectorGlyphForName:(id)arg1;
- (id)_baseVectorRenditionKey:(id)arg1;
- (id)_dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 appearanceIdentifier:(long long)arg6 graphicsFallBackOrder:(id)arg7 deviceSubtypeFallBackOrder:(id)arg8;
- (id)_defaultAssetRenditionKey:(id)arg1;
- (id)_defaultLayerStackWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (id)_defaultNamedAssetWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (bool)_doStyledQuartzDrawingInContext:(struct CGContext { }*)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 drawingHandler:(id /* block */)arg5;
- (bool)_effectStyle:(unsigned long long*)arg1 state:(long long*)arg2 presentationState:(long long*)arg3 value:(long long*)arg4 resolution:(unsigned long long*)arg5 dimension1:(unsigned long long*)arg6 appearance:(long long*)arg7 fromStyleConfiguration:(id)arg8;
- (id)_imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 appearanceIdentifier:(long long)arg11 graphicsFallBackOrder:(id)arg12 deviceSubtypeFallBackOrder:(id)arg13;
- (id)_layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)_modelWithName:(id)arg1;
- (id)_nameForAppearanceIdentifier:(long long)arg1;
- (id)_namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(long long)arg4 deviceSubtype:(unsigned long long)arg5 memoryClass:(unsigned long long)arg6 graphicsClass:(unsigned long long)arg7 graphicsFallBackOrder:(id)arg8 deviceSubtypeFallBackOrder:(id)arg9;
- (id)_namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceName:(id)arg9;
- (id)_namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 appearanceName:(id)arg3;
- (id)_namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 appearanceName:(id)arg4;
- (id)_namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceIdentifier:(long long)arg9;
- (id)_private_resolvedRenditionKeyFromThemeRef:(unsigned long long)arg1 withBaseKey:(id)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 layoutDirection:(long long)arg7 sizeClassHorizontal:(long long)arg8 sizeClassVertical:(long long)arg9 memoryClass:(unsigned long long)arg10 graphicsClass:(unsigned long long)arg11 graphicsFallBackOrder:(id)arg12 deviceSubtypeFallBackOrder:(id)arg13 localizationIdentifier:(unsigned long long)arg14 adjustRenditionKeyWithBlock:(id /* block */)arg15;
- (id)_recognitionImageWithName:(id)arg1;
- (id)_recognitionObjectWithName:(id)arg1;
- (id)_resolvedRenditionKeyForName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 graphicsFallBackOrder:(id)arg11 deviceSubtypeFallBackOrder:(id)arg12 withBaseKeySelector:(SEL)arg13 adjustRenditionKeyWithBlock:(id /* block */)arg14;
- (id)_resolvedRenditionKeyFromThemeRef:(unsigned long long)arg1 withBaseKey:(id)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 layoutDirection:(long long)arg7 sizeClassHorizontal:(long long)arg8 sizeClassVertical:(long long)arg9 memoryClass:(unsigned long long)arg10 graphicsClass:(unsigned long long)arg11 graphicsFallBackOrder:(id)arg12 deviceSubtypeFallBackOrder:(id)arg13 adjustRenditionKeyWithBlock:(id /* block */)arg14;
- (void)_resourceUnPinnedNotification:(id)arg1;
- (void)_setPreferredLocalization:(id)arg1;
- (void)_sharedSetup;
- (unsigned long long)_storageRefForRendition:(id)arg1 representsODRContent:(bool*)arg2;
- (unsigned long long)_themeRef;
- (id)_themeStore;
- (id)allImageNames;
- (id)appearanceNames;
- (int)blendModeForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (bool)canGetShapeEffectRenditionWithKey:(id)arg1;
- (void)clearCachedImageResources;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2 appearanceName:(id)arg3;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2 deviceIdiom:(long long)arg3;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2 deviceIdiom:(long long)arg3 appearanceName:(id)arg4;
- (id)dataWithName:(id)arg1;
- (id)dataWithName:(id)arg1 appearanceName:(id)arg2;
- (id)dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 appearanceIdentifier:(long long)arg6 graphicsFallBackOrder:(id)arg7 deviceSubtypeFallBackOrder:(id)arg8;
- (id)dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 graphicsFallBackOrder:(id)arg6 deviceSubtypeFallBackOrder:(id)arg7;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultLayerStackWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (id)defaultNamedAssetWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (bool)drawGlyphs:(const unsigned short*)arg1 atPositions:(const struct CGPoint { double x1; double x2; }*)arg2 inContext:(struct CGContext { }*)arg3 withFont:(struct __CTFont { }*)arg4 count:(unsigned long long)arg5 stylePresetName:(id)arg6 styleConfiguration:(id)arg7 foregroundColor:(struct CGColor { }*)arg8;
- (void)enumerateNamedLookupsUsingBlock:(id /* block */)arg1;
- (struct CGColor { }*)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (struct CGColor { }*)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2 baseForegroundColor:(struct CGColor { }*)arg3;
- (bool)fillStyledPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (bool)fillStyledRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (bool)hasStylePresetWithName:(id)arg1;
- (bool)hasStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 desiredSize:(struct CGSize { double x1; double x2; })arg9;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 desiredSize:(struct CGSize { double x1; double x2; })arg9 appearanceName:(id)arg10;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3 layoutDirection:(long long)arg4 desiredSize:(struct CGSize { double x1; double x2; })arg5;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3 layoutDirection:(long long)arg4 desiredSize:(struct CGSize { double x1; double x2; })arg5 appearanceName:(id)arg6;
- (id)imageByStylingImage:(struct CGImage { }*)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 foregroundColor:(struct CGColor { }*)arg4 scale:(double)arg5;
- (bool)imageExistsWithName:(id)arg1;
- (bool)imageExistsWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 appearanceName:(id)arg3;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 appearanceName:(id)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 appearanceName:(id)arg5;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceName:(id)arg9;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(long long)arg9 graphicsClass:(long long)arg10;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 appearanceIdentifier:(long long)arg11 graphicsFallBackOrder:(id)arg12 deviceSubtypeFallBackOrder:(id)arg13;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 graphicsFallBackOrder:(id)arg11 deviceSubtypeFallBackOrder:(id)arg12;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 appearanceName:(id)arg7;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 layoutDirection:(long long)arg4 adjustRenditionKeyWithBlock:(id /* block */)arg5;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4 appearanceName:(id)arg5;
- (id)imagesWithName:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)layerStackWithName:(id)arg1;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)localObjectCache;
- (id)lookupCache;
- (id)modelWithName:(id)arg1;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(long long)arg4 deviceSubtype:(unsigned long long)arg5 memoryClass:(unsigned long long)arg6 graphicsClass:(unsigned long long)arg7 graphicsFallBackOrder:(id)arg8 deviceSubtypeFallBackOrder:(id)arg9;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceName:(id)arg9;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)namedRecognitionGroupWithName:(id)arg1;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 appearanceName:(id)arg3;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 appearanceName:(id)arg4;
- (id)namedVectorGlyphWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 glyphSize:(long long)arg4 glyphWeight:(long long)arg5 glyphPointSize:(double)arg6 appearanceName:(id)arg7;
- (id)namedVectorGlyphWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 layoutDirection:(long long)arg4 glyphSize:(long long)arg5 glyphWeight:(long long)arg6 glyphPointSize:(double)arg7 appearanceName:(id)arg8;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceName:(id)arg9;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4 appearanceName:(id)arg5;
- (id)negativeCache;
- (id)newShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)newShapeEffectPresetWithRenditionKey:(id)arg1;
- (id)newShapeEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3;
- (id)newTextEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3;
- (id)parentNamedImageAtlasForImageNamed:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3;
- (id)parentNamedImageAtlastForImageNamed:(id)arg1 scaleFactor:(double)arg2;
- (struct CGPDFDocument { }*)pdfDocumentWithName:(id)arg1;
- (struct CGPDFDocument { }*)pdfDocumentWithName:(id)arg1 appearanceName:(id)arg2;
- (void)preloadNamedAtlasWithScaleFactor:(double)arg1 andNames:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)renditionKeyForShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)renditionKeyForShapeEffectPresetWithStyleID:(unsigned long long)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5 dimension1:(unsigned long long)arg6;
- (id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5 dimension1:(unsigned long long)arg6 appearance:(long long)arg7;
- (void)setStorageRef:(unsigned long long)arg1;
- (unsigned long long)storageRef;
- (bool)strokeStyledPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (struct { double x1; double x2; double x3; double x4; })styledInsetsForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor { }*)arg3 scale:(double)arg4;
- (id)textStyleWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 displayGamut:(long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)textStyleWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 displayGamut:(long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 appearanceName:(id)arg7;
- (id)textStyleWithName:(id)arg1 displayGamut:(long long)arg2;
- (id)textStyleWithName:(id)arg1 displayGamut:(long long)arg2 appearanceName:(id)arg3;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_IS_assetCatalogURLWithBundleURL:(id)arg1;
+ (id)_IS_coreGlyphsBundleURL;

// Image: /System/Library/PrivateFrameworks/MobileIcons.framework/MobileIcons

- (id)_LI_iconImageWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 idiom:(long long)arg4 subtype:(unsigned long long)arg5 gamut:(long long)arg6 layoutDirection:(long long)arg7;

@end