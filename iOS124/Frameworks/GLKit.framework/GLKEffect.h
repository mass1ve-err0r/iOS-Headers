//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GLKShaderBlockNode, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface GLKEffect : NSObject
{
    NSMutableArray *_properties;
    unsigned char _colorMaterialEnabled;
    unsigned char _lightModelTwoSided;
    union _GLKVector4 _lightModelAmbientColor;
    unsigned char _texturingEnabled;
    NSArray *_textureOrder;
    NSString *_label;
    unsigned char _perVertexLightingEnabled;
    unsigned char _perPixelLightingEnabled;
    unsigned char _masksInitialized;
    _Bool _textureOrderStale;
    unsigned int _numLights;
    unsigned int _numTextures;
    int _aColorLoc;
    unsigned int _vshName;
    unsigned int _fshName;
    unsigned int _programName;
    unsigned int _numVshStrings;
    unsigned int _numFshStrings;
    int _lightModelAmbientColorLoc;
    int _baseLightingColorLoc;
    NSMutableDictionary *_programHash;
    float *_materialAmbientColor;
    float *_materialDiffuseColor;
    id *_effectShaderArray;
    NSMutableArray *_lightProperties;
    GLKShaderBlockNode *_vshRootNode;
    GLKShaderBlockNode *_fshRootNode;
    char **_vshStrings;
    char **_fshStrings;
    unsigned long long _dirtyUniforms;
    struct GLKBigInt_s *_fshMask;
    struct GLKBigInt_s *_vshMask;
    union _GLKVector4 _baseLightingColor;
    struct GLKBigInt_s _prevFshMask;
    struct GLKBigInt_s _prevVshMask;
}

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
+ (id)shaderInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (id)programInfoLogForName:(unsigned int)arg1 effectLabel:(id)arg2 msg:(const char *)arg3;
+ (void)unrollLoopNodesForStaticTreeWithRoot:(id)arg1;
+ (_Bool)parseXMLFile:(id)arg1 rootNode:(id)arg2;
+ (void)initializeStaticMasks;
+ (void)initialize;
@property(nonatomic) struct GLKBigInt_s prevVshMask; // @synthesize prevVshMask=_prevVshMask;
@property(nonatomic) struct GLKBigInt_s prevFshMask; // @synthesize prevFshMask=_prevFshMask;
@property(nonatomic) struct GLKBigInt_s *vshMask; // @synthesize vshMask=_vshMask;
@property(nonatomic) struct GLKBigInt_s *fshMask; // @synthesize fshMask=_fshMask;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int baseLightingColorLoc; // @synthesize baseLightingColorLoc=_baseLightingColorLoc;
@property(nonatomic) int lightModelAmbientColorLoc; // @synthesize lightModelAmbientColorLoc=_lightModelAmbientColorLoc;
@property(nonatomic) _Bool textureOrderStale; // @synthesize textureOrderStale=_textureOrderStale;
@property(nonatomic) unsigned long long dirtyUniforms; // @synthesize dirtyUniforms=_dirtyUniforms;
@property(nonatomic) unsigned int numFshStrings; // @synthesize numFshStrings=_numFshStrings;
@property(nonatomic) unsigned int numVshStrings; // @synthesize numVshStrings=_numVshStrings;
@property(nonatomic) char **fshStrings; // @synthesize fshStrings=_fshStrings;
@property(nonatomic) char **vshStrings; // @synthesize vshStrings=_vshStrings;
@property(nonatomic) unsigned int programName; // @synthesize programName=_programName;
@property(nonatomic) unsigned int fshName; // @synthesize fshName=_fshName;
@property(nonatomic) unsigned int vshName; // @synthesize vshName=_vshName;
@property(readonly, nonatomic) GLKShaderBlockNode *fshRootNode; // @synthesize fshRootNode=_fshRootNode;
@property(readonly, nonatomic) GLKShaderBlockNode *vshRootNode; // @synthesize vshRootNode=_vshRootNode;
@property(copy, nonatomic) NSArray *textureOrder; // @synthesize textureOrder=_textureOrder;
@property(retain, nonatomic) NSMutableArray *lightProperties; // @synthesize lightProperties=_lightProperties;
@property(nonatomic) id *effectShaderArray; // @synthesize effectShaderArray=_effectShaderArray;
@property(nonatomic) int aColorLoc; // @synthesize aColorLoc=_aColorLoc;
@property(nonatomic) unsigned char masksInitialized; // @synthesize masksInitialized=_masksInitialized;
@property(nonatomic) union _GLKVector4 baseLightingColor; // @synthesize baseLightingColor=_baseLightingColor;
@property(readonly, nonatomic) float *materialDiffuseColor; // @synthesize materialDiffuseColor=_materialDiffuseColor;
@property(readonly, nonatomic) float *materialAmbientColor; // @synthesize materialAmbientColor=_materialAmbientColor;
@property(nonatomic) unsigned char texturingEnabled; // @synthesize texturingEnabled=_texturingEnabled;
@property(nonatomic) union _GLKVector4 lightModelAmbientColor; // @synthesize lightModelAmbientColor=_lightModelAmbientColor;
@property(nonatomic) unsigned char lightModelTwoSided; // @synthesize lightModelTwoSided=_lightModelTwoSided;
@property(nonatomic) unsigned char colorMaterialEnabled; // @synthesize colorMaterialEnabled=_colorMaterialEnabled;
@property(nonatomic) unsigned int numTextures; // @synthesize numTextures=_numTextures;
@property(nonatomic) unsigned int numLights; // @synthesize numLights=_numLights;
@property(nonatomic) unsigned char perPixelLightingEnabled; // @synthesize perPixelLightingEnabled=_perPixelLightingEnabled;
@property(nonatomic) unsigned char perVertexLightingEnabled; // @synthesize perVertexLightingEnabled=_perVertexLightingEnabled;
@property(readonly, nonatomic) NSMutableDictionary *programHash; // @synthesize programHash=_programHash;
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
- (void)dealloc;
- (char **)fshMaskStr;
- (char **)vshMaskStr;
- (unsigned int)fshMaskCt;
- (unsigned int)vshMaskCt;
- (struct GLKBigInt_s *)fshMasks;
- (struct GLKBigInt_s *)vshMasks;
- (id)description;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (_Bool)includeShaderTextForRootNode:(id)arg1;
- (void)initializeMasks;
- (void)bind;
- (void)createAndUseProgramWithShadingHash:(id)arg1;
- (void)updateFshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s)arg2;
- (void)updateVshStringsWithRoot:(id)arg1 enabled:(struct GLKBigInt_s)arg2;
- (void)setShaderBindings;
- (_Bool)useColorAttrib;
- (_Bool)useTexCoordAttrib;
- (void)setTextureIndices;
- (void)addTransformProperty;
- (void)dirtyAllUniforms;
- (id)initWithPropertyArray:(id)arg1;
- (id)init;

@end

