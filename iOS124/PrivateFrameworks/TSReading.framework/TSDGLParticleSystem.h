//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSDGLDataBuffer, TSDGLDataBufferAttribute, TSDGLShader;

@interface TSDGLParticleSystem : NSObject
{
    _Bool *_visibilities;
    _Bool _isInitialized;
    _Bool _isDataBufferInitialized;
    unsigned long long _textureCount;
    _Bool _hasParticleTexture;
    _Bool _shouldDraw;
    unsigned long long _particleCount;
    unsigned long long _visibleParticleCount;
    unsigned long long _particlesWide;
    unsigned long long _particlesHigh;
    double _duration;
    unsigned long long _direction;
    TSDGLDataBufferAttribute *_positionAttribute;
    TSDGLDataBufferAttribute *_centerAttribute;
    TSDGLDataBufferAttribute *_texCoordAttribute;
    TSDGLDataBufferAttribute *_particleTexCoordAttribute;
    TSDGLDataBufferAttribute *_colorAttribute;
    TSDGLDataBufferAttribute *_lifeSpanAttribute;
    TSDGLDataBufferAttribute *_speedAttribute;
    TSDGLDataBufferAttribute *_rotationAttribute;
    TSDGLDataBufferAttribute *_scaleAttribute;
    TSDGLDataBuffer *_dataBuffer;
    TSDGLShader *_shader;
    struct CGSize _particleSize;
    struct CGSize _objectSize;
    struct CGSize _slideSize;
}

+ (_Bool)useGLSL;
+ (_Bool)willOverrideVisibilities;
+ (_Bool)shouldDrawInvisibleParticles;
+ (_Bool)willOverrideColors;
+ (_Bool)willOverrideStartingPoints;
+ (_Bool)willOverrideGeometry;
+ (unsigned long long)numberOfVerticesPerParticle;
+ (id)newDataBufferAttributeWithName:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDraw; // @synthesize shouldDraw=_shouldDraw;
@property(readonly, nonatomic) TSDGLShader *shader; // @synthesize shader=_shader;
@property(readonly, nonatomic) TSDGLDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *scaleAttribute; // @synthesize scaleAttribute=_scaleAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *rotationAttribute; // @synthesize rotationAttribute=_rotationAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *speedAttribute; // @synthesize speedAttribute=_speedAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *lifeSpanAttribute; // @synthesize lifeSpanAttribute=_lifeSpanAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *colorAttribute; // @synthesize colorAttribute=_colorAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *particleTexCoordAttribute; // @synthesize particleTexCoordAttribute=_particleTexCoordAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *texCoordAttribute; // @synthesize texCoordAttribute=_texCoordAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *centerAttribute; // @synthesize centerAttribute=_centerAttribute;
@property(readonly, nonatomic) TSDGLDataBufferAttribute *positionAttribute; // @synthesize positionAttribute=_positionAttribute;
@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) struct CGSize slideSize; // @synthesize slideSize=_slideSize;
@property(readonly, nonatomic) struct CGSize objectSize; // @synthesize objectSize=_objectSize;
@property(readonly, nonatomic) struct CGSize particleSize; // @synthesize particleSize=_particleSize;
@property(readonly, nonatomic) unsigned long long particlesHigh; // @synthesize particlesHigh=_particlesHigh;
@property(readonly, nonatomic) unsigned long long particlesWide; // @synthesize particlesWide=_particlesWide;
@property(readonly, nonatomic) unsigned long long visibleParticleCount; // @synthesize visibleParticleCount=_visibleParticleCount;
@property(readonly, nonatomic) unsigned long long particleCount; // @synthesize particleCount=_particleCount;
- (void)drawGLSLWithPercent:(double)arg1 opacity:(double)arg2;
- (void)setupGLSL;
- (_Bool)visibilityAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_f2e236b6)colorAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_6e3f967a)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (double)scaleAtIndexPoint:(struct CGPoint)arg1;
- (double)rotationMax;
- (CDStruct_03942939)rotationAtIndexPoint:(struct CGPoint)arg1;
- (double)speedMax;
- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;
- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_6e3f967a)centerAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_6e3f967a)vertexPositionAtVertexIndex:(unsigned long long)arg1 particleIndexPoint:(struct CGPoint)arg2;
- (struct CGContext *)newContextFromTexture:(id)arg1;
@property(readonly, nonatomic) NSArray *dataBufferAttributes;
- (struct CGPoint)indexPointFromIndex:(unsigned long long)arg1;
- (unsigned long long)indexFromPoint:(struct CGPoint)arg1;
- (id)description;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(_Bool)arg3;
- (void)dealloc;
- (id)initWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 shader:(id)arg6;
- (id)initWithParticleSize:(struct CGSize)arg1 particleSystemSize:(struct CGSize)arg2 objectSize:(struct CGSize)arg3 slideSize:(struct CGSize)arg4 duration:(double)arg5 direction:(unsigned long long)arg6 shader:(id)arg7;
- (void)p_logParticleInformation;
- (struct CGSize)p_particleSystemSizeWithRequestedNumber:(unsigned long long)arg1 objectSize:(struct CGSize)arg2;
- (void)p_reverseParticleDataDrawOrder;
- (void)p_setupVertexData;
- (void)p_setupParticleDataWithTexture:(id)arg1;
- (void)p_setupDataBufferWithParticleCount:(unsigned long long)arg1 visibleParticleCount:(unsigned long long)arg2;
- (void)p_setDataBufferAttribute:(id *)arg1 withName:(id)arg2 defaultDataType:(int)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;

@end

