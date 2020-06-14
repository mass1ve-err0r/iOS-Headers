//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNShadable-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCNMaterialProperty, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNMaterial : NSObject <SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding>
{
    struct __C3DMaterial *_material;
    SCNMaterialProperty *_ambient;
    SCNMaterialProperty *_diffuse;
    SCNMaterialProperty *_specular;
    SCNMaterialProperty *_emission;
    SCNMaterialProperty *_reflective;
    SCNMaterialProperty *_transparent;
    SCNMaterialProperty *_multiply;
    SCNMaterialProperty *_normal;
    SCNMaterialProperty *_ambientOcclusion;
    SCNMaterialProperty *_selfIllumination;
    SCNMaterialProperty *_metalness;
    SCNMaterialProperty *_roughness;
    SCNMaterialProperty *_displacement;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
    float _shininess;
    float _transparency;
    float _indexOfRefraction;
    float _fresnelExponent;
    float _selfIlluminationOcclusion;
    long long _transparencyMode;
    NSString *_lightingModelName;
    long long _cullMode;
    SCNShadableHelper *_shadableHelper;
    _Bool _isPresentationInstance;
    _Bool _litPerPixel;
    _Bool _doubleSided;
    _Bool _locksAmbientWithDiffuse;
    _Bool _avoidsOverLighting;
    _Bool _writesToDepthBuffer;
    _Bool _readsFromDepthBuffer;
    unsigned long long _fillMode;
    long long _blendMode;
    long long _colorBufferWriteMask;
}

+ (_Bool)supportsSecureCoding;
+ (id)materialNamed:(id)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
+ (id)materialWithContents:(id)arg1;
+ (id)materialWithColor:(id)arg1;
+ (id)material;
+ (id)materialWithMaterialRef:(struct __C3DMaterial *)arg1;
+ (id)materialWithMDLMaterial:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customEncodingOfSCNMaterial:(id)arg1;
- (void)_customDecodingOfSCNMaterial:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(retain, nonatomic) SCNProgram *program;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)shaderModifiersArgumentsNames;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (void)copyShaderModifiersFrom:(id)arg1;
- (id)__shadableHelper;
- (void)_setupShadableHelperIfNeeded;
- (id)customMaterialAttributes;
- (id)customMaterialAttributeNames;
- (id)customMaterialProperties;
- (id)customMaterialPropertyNames;
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (struct __C3DMaterial *)materialRefCreateIfNeeded;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_copyAttributes:(id)arg1;
- (void)_setAttributes:(id)arg1;
- (void)removeAllBindings;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fillMode;
@property(nonatomic) long long cullMode;
- (_Bool)doubleSided;
@property(nonatomic, getter=isDoubleSided) _Bool doubleSided;
- (void)setContent:(id)arg1;
- (id)content;
- (void)setContents:(id)arg1;
- (id)contents;
@property(nonatomic) _Bool readsFromDepthBuffer;
@property(nonatomic) long long colorBufferWriteMask;
@property(nonatomic) _Bool writesToDepthBuffer;
- (_Bool)avoidsOverLighting;
- (void)setAvoidsOverLighting:(_Bool)arg1;
@property(nonatomic) _Bool locksAmbientWithDiffuse;
- (_Bool)litPerPixel;
@property(nonatomic, getter=isLitPerPixel) _Bool litPerPixel;
@property(copy, nonatomic) NSString *lightingModelName;
@property(nonatomic) long long blendMode;
- (double)selfIlluminationOcclusion;
- (void)setSelfIlluminationOcclusion:(double)arg1;
@property(nonatomic) double fresnelExponent;
- (double)indexOfRefraction;
- (void)setIndexOfRefraction:(double)arg1;
@property(nonatomic) double transparency;
@property(nonatomic) double shininess;
@property(nonatomic) long long transparencyMode;
@property(readonly, nonatomic) SCNMaterialProperty *displacement;
@property(readonly, nonatomic) SCNMaterialProperty *roughness;
@property(readonly, nonatomic) SCNMaterialProperty *metalness;
@property(readonly, nonatomic) SCNMaterialProperty *selfIllumination;
@property(readonly, nonatomic) SCNMaterialProperty *ambientOcclusion;
@property(readonly, nonatomic) SCNMaterialProperty *normal;
@property(readonly, nonatomic) SCNMaterialProperty *multiply;
@property(readonly, nonatomic) SCNMaterialProperty *transparent;
@property(readonly, nonatomic) SCNMaterialProperty *reflective;
@property(readonly, nonatomic) SCNMaterialProperty *emission;
@property(readonly, nonatomic) SCNMaterialProperty *specular;
@property(readonly, nonatomic) SCNMaterialProperty *diffuse;
@property(readonly, nonatomic) SCNMaterialProperty *ambient;
- (id)_property:(id *)arg1;
- (id)properties;
- (id)builtinProperties;
- (id)color;
- (void)setColor:(id)arg1;
- (void)_setupMaterialProperty:(id *)arg1;
- (Class)_materialPropertyClass;
- (struct __C3DEffectCommonProfile *)commonProfile;
- (struct __C3DMaterial *)materialRef;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationMaterial;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (void)dealloc;
- (id)initPresentationMaterialWithMaterialRef:(struct __C3DMaterial *)arg1;
- (id)initWithMaterialRef:(struct __C3DMaterial *)arg1;
- (id)init;
- (id)_integrateModelKitComputedMaps:(id)arg1 withGeometry:(id)arg2 node:(id)arg3 texturePathProvider:(CDUnknownBlockType)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed:(id)arg6 filePath:(id)arg7;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

