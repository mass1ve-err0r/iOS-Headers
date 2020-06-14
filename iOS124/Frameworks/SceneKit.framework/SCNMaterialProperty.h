//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNOrderedDictionary, UIColor;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding>
{
    unsigned int _isPresentationInstance:1;
    unsigned int _isCommonProfileProperty:1;
    unsigned int _sRGB:1;
    unsigned int _preventWarmup:1;
    BOOL _propertyType;
    id _parent;
    NSString *_customSlotName;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    UIColor *_borderColor;
    id _contents;
    unsigned char _contentType;
    long long _mappingChannel;
    unsigned char _minificationFilter;
    unsigned char _magnificationFilter;
    unsigned char _mipFilter;
    unsigned char _wrapS;
    unsigned char _wrapT;
    unsigned char _textureComponents;
    float _intensity;
    float _maxAnisotropy;
    struct __C3DEffectSlot *_customSlot;
    struct __C3DImage *_c3dImage;
    struct SCNMatrix4 *_contentTransform;
    id _runtimeResolvedPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)captureDeviceOutputConsumer;
+ (id)copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (id)_copyImageFromC3DImage:(struct __C3DImage *)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2;
+ (struct __C3DImage *)copyC3DImageFromImage:(id)arg1 textureOptions:(int)arg2 wasCached:(_Bool *)arg3;
+ (struct __C3DImage *)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2;
+ (id)dvt_supportedTypesForPropertyContents;
+ (id)materialPropertyWithContents:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_hasDefaultValues;
- (void)_customDecodingOfSCNMaterialProperty:(id)arg1;
- (void)_didDecodeSCNMaterialProperty:(id)arg1;
- (void)_customEncodingOfSCNMaterialProperty:(id)arg1;
- (void)_updateMaterialColor:(id)arg1;
- (void)_updateMaterialNumber:(id)arg1;
- (void)_updateMaterialImage:(id)arg1;
- (void)_updateMaterialProceduralContents:(id)arg1;
- (void)_updateMaterialLayer:(id)arg1;
- (void)_updateMaterialSKTexture:(id)arg1;
- (void)_updateMaterialMTLTexture:(id)arg1;
- (void)_updateMaterialSKScene:(id)arg1;
- (void)_skSceneDidChange:(id)arg1;
- (void)_layerDidChange:(id)arg1;
- (void)_updateMaterialAttachment:(id)arg1;
- (void)_updateMaterialPropertyTransform:(union C3DMatrix4x4)arg1;
- (void)_updateMaterialFilters;
- (void)_updateMaterialBorderColor:(id)arg1;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationMaterialProperty;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyPropertiesFrom:(id)arg1;
- (void)_syncObjCModel;
- (struct __C3DScene *)sceneRef;
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
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (struct __C3DTextureSampler *)textureSampler;
- (struct __C3DEffectCommonProfile *)commonProfile;
- (struct __C3DEffectSlot *)effectSlot;
- (id)parent;
- (void)parentWillDie:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)propertyType;
- (id)slotName;
- (id)propertyName;
@property(nonatomic) struct SCNMatrix4 contentsTransform;
- (id)mtlTexture;
- (void)setMtlTexture:(id)arg1;
- (id)proceduralContents;
- (void)setProceduralContents:(id)arg1;
@property(nonatomic) double maxAnisotropy;
- (id)content;
- (void)setContent:(id)arg1;
- (void)_setImagePath:(id)arg1 withResolvedPath:(id)arg2;
@property(retain, nonatomic) id contents;
- (void)setUIWindow:(id)arg1;
- (id)UIView;
- (void)setUIView:(id)arg1;
- (void)_updateMaterialUIComponent:(id)arg1;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)skTexture;
- (void)setSkTexture:(id)arg1;
- (id)skScene;
- (void)setSkScene:(id)arg1;
- (id)pvrtcData;
- (id)image;
- (void)setImage:(id)arg1;
- (void)_updateC3DImageWithContents:(id)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (int)_textureOptions;
- (void)setSRGBTexture:(_Bool)arg1;
- (_Bool)sRGBTexture;
@property(nonatomic) long long wrapT;
@property(nonatomic) long long wrapS;
@property(retain, nonatomic) id borderColor;
@property(nonatomic) double intensity;
@property(nonatomic) long long textureComponents;
@property(nonatomic) long long mappingChannel;
- (long long)_presentationMappingChannel;
@property(nonatomic) long long mipFilter;
@property(nonatomic) long long magnificationFilter;
@property(nonatomic) long long minificationFilter;
- (C3DColor4_0cad58d8)borderColor4;
- (C3DColor4_0cad58d8)color4;
- (void *)getC3DImageRef;
- (void)_setupContentsFromC3DImage;
- (void)_setC3DImageRef:(struct __C3DImage *)arg1;
- (id)floatValue;
- (void)setFloatValue:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)_setColor:(id)arg1;
- (void)_clearContents;
- (id)_animationPathForKey:(id)arg1;
- (struct __C3DEffectSlot *)effectSlotCreateIfNeeded:(_Bool)arg1;
- (void)linkCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2;
- (void)unlinkCustomPropertyWithParent:(id)arg1;
- (void)_setParent:(id)arg1;
- (void)dealloc;
- (void)__allocateContentTransformIfNeeded;
- (id)initPresentationMaterialPropertyWithModelProperty:(id)arg1;
- (id)initWithParent:(id)arg1 andCustomName:(id)arg2;
- (id)initWithParent:(id)arg1 propertyType:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

