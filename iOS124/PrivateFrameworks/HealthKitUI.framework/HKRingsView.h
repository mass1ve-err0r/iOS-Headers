//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKitUI/HKGLView.h>

#import <HealthKitUI/HKRingGroupAnimationStatusDelegate-Protocol.h>

@class GLKTextureInfo, NSArray, UIImage;

@interface HKRingsView : HKGLView <HKRingGroupAnimationStatusDelegate>
{
    int _numRingsPerGroup;
    _Bool _ringVAOinit;
    _Bool _iconVAOinit;
    _Bool _buffersCreated;
    _Bool _prevRingsAreEmpty;
    _Bool _didSetup;
    struct {
        union _GLKVector4 _field1;
        union _GLKVector4 _field2;
        union _GLKVector4 _field3;
        union _GLKVector2 _field4;
        union _GLKVector2 _field5;
    } *_ringVertices;
    union _GLKVector2 *_ringVertexCoordinates;
    union _GLKVector2 *_ringVertexPositions;
    struct {
        union _GLKVector2 _field1;
        float _field2;
        float _field3;
        union _GLKVector4 _field4;
        union _GLKVector2 _field5;
    } *_iconSpriteVertices;
    GLKTextureInfo *_iconSpriteTexture;
    union _GLKMatrix4 _projectionMatrix;
    unsigned int _ringProgram;
    unsigned int _ringEndCapProgram;
    unsigned int _ringEmptyProgram;
    unsigned int _flatColorProgram;
    unsigned int _iconSpriteProgram;
    unsigned int _coordinateBuffer;
    unsigned int _positionBuffer;
    unsigned int _coordPercentBuffer;
    unsigned int _iconSpriteVertexBuffer;
    unsigned int _ringsVAO;
    unsigned int _iconsVAO;
    unsigned int _transformUniform;
    unsigned int _endCapShadowDistanceUniform;
    unsigned int _iconSpriteTransformUniform;
    unsigned int _iconSpriteSamplerUniform;
    unsigned int _iconSpriteIconsPerDimensionUniform;
    unsigned int _positionAttribute;
    unsigned int _color1Attribute;
    unsigned int _color2Attribute;
    unsigned int _sizesAttribute;
    unsigned int _percentagesAttribute;
    unsigned int _coordinateAttribute;
    unsigned int _coordPercentAttribute;
    unsigned int _trigResultsAttribute;
    unsigned int _emptyShaderAlphaUniform;
    unsigned int _ringShaderAlphaUniform;
    unsigned int _iconSpritePositionAttribute;
    unsigned int _iconSpriteSizeAttribute;
    unsigned int _iconSpriteColorAttribute;
    unsigned int _iconSpriteTextureOffsetAttribute;
    double _screenScale;
    double _cachedPointSize[3];
    double _cachedThickness[3];
    struct CGPoint _cachedPosition[3];
    struct CGPoint _cachedGroupCenter;
    int _ringGroupsPerRow;
    NSArray *_ringGroups;
    double _ringSpacing;
    double _emptyRingAlpha;
    UIImage *_iconSpriteImage;
    unsigned long long _iconTextureRows;
    unsigned long long _iconTextureColumns;
}

+ (void)clearSharedCaches;
+ (id)_iconSpriteImage;
+ (id)_ringsViewConfiguredForCompanionWithNumberOfRings:(long long)arg1 ringType:(long long)arg2;
+ (id)ringsViewConfiguredForOneRingOnCompanionOfType:(long long)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnCompanion;
+ (id)_ringsViewConfiguredForGizmoWithNumberOfRings:(long long)arg1 ringType:(long long)arg2 withIcons:(_Bool)arg3;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withIcon:(_Bool)arg2;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnWatch;
@property(nonatomic) unsigned long long iconTextureColumns; // @synthesize iconTextureColumns=_iconTextureColumns;
@property(nonatomic) unsigned long long iconTextureRows; // @synthesize iconTextureRows=_iconTextureRows;
@property(retain, nonatomic) UIImage *iconSpriteImage; // @synthesize iconSpriteImage=_iconSpriteImage;
@property(nonatomic) double emptyRingAlpha; // @synthesize emptyRingAlpha=_emptyRingAlpha;
@property(nonatomic) double ringSpacing; // @synthesize ringSpacing=_ringSpacing;
@property(nonatomic) int ringGroupsPerRow; // @synthesize ringGroupsPerRow=_ringGroupsPerRow;
@property(readonly, nonatomic) NSArray *ringGroups; // @synthesize ringGroups=_ringGroups;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (void)_destroyBuffers;
- (void)ringGroupDidBeginAnimations:(id)arg1;
- (unsigned int)drawInRect:(struct CGRect)arg1 withContext:(id)arg2;
- (void)update;
- (void)_context_prepareForIconDraw;
- (void)_context_prepareForRingDraw:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_updateProjectionMatrix;
- (void)_context_loadFlatColorProgramIfNeeded;
- (void)_context_loadRingEmptyProgramIfNeeded;
- (void)_context_loadUniformsAndAttributes;
- (void)_context_createBuffers;
- (void)_setupIfNecessary;
- (void)_loadIconDataForGroupAtIndex:(long long)arg1;
- (void)_context_loadRingDataForGroupAtIndex:(long long)arg1;
- (void)_setRingGroups:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithRingGroups:(id)arg1 numberOfRingsPerGroup:(int)arg2;
- (void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setBriskPercentage:(double)arg1 animated:(_Bool)arg2;
- (void)setMovingHoursPercentage:(double)arg1 animated:(_Bool)arg2;
- (void)setActiveEnergyPercentage:(double)arg1 animated:(_Bool)arg2;

@end

