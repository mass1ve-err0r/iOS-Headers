//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDGLDataBuffer-Protocol.h>
#import <iWorkImport/TSDMTLDataBuffer-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSDGLShader;
@protocol MTLBuffer, MTLDevice;

__attribute__((visibility("hidden")))
@interface TSDGPUDataBuffer : NSObject <TSDGLDataBuffer, TSDMTLDataBuffer>
{
    unsigned long long _currentBufferIndex;
    NSMutableArray *_arrayBuffers;
    NSMutableDictionary *_attributeToArrayBuffersDictionary;
    unsigned long long _elementArrayCount;
    unsigned short *_gLElementData;
    _Bool _gLElementDataBufferWasSetup;
    unsigned int _gLElementDataBuffer;
    id <MTLBuffer> _metalElementData;
    struct CGSize _gLElementMeshSize;
    unsigned long long _gLElementQuadParticleCount;
    _Bool _conformsToMetalProtocol;
    id <MTLDevice> _device;
    unsigned int _gLVertexArrayObjects[2];
    _Bool _isUpdatingRawDataBuffer;
    _Bool _didTeardown;
    _Bool _isEnabled;
    TSDGLShader *_enabledShader;
    _Bool _isDynamicallyBuffered;
    unsigned int _drawMode;
    unsigned long long _vertexCount;
    NSArray *_vertexAttributes;
    unsigned long long _metalDrawMode;
    unsigned long long _positionAttributeIndex;
    unsigned long long _texCoordAttributeIndex;
    unsigned long long _centerAttributeIndex;
}

+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5 device:(id)arg6;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 device:(id)arg5;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3;
@property(readonly) unsigned long long centerAttributeIndex; // @synthesize centerAttributeIndex=_centerAttributeIndex;
@property(readonly) unsigned long long texCoordAttributeIndex; // @synthesize texCoordAttributeIndex=_texCoordAttributeIndex;
@property(readonly) unsigned long long positionAttributeIndex; // @synthesize positionAttributeIndex=_positionAttributeIndex;
@property(nonatomic) unsigned long long metalDrawMode; // @synthesize metalDrawMode=_metalDrawMode;
@property(readonly) _Bool isDynamicallyBuffered; // @synthesize isDynamicallyBuffered=_isDynamicallyBuffered;
@property(nonatomic) unsigned int drawMode; // @synthesize drawMode=_drawMode;
@property(readonly) NSArray *vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
@property(readonly) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
- (_Bool)p_setAttributeUpdateData:(CDStruct_64113493 *)arg1 fromAttribute:(id)arg2;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)updateDataBufferAttributesWithBlock:(CDUnknownBlockType)arg1;
- (id)vertexAttributeNamed:(id)arg1;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
- (void)setGLPoint4D:(CDStruct_818bb265)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_818bb265)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_03942939)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (CDStruct_6e3f967a)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(_Bool)arg3;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3 advanceDynamicBuffer:(_Bool)arg4;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)disableWithDevice:(id)arg1;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange)arg2 deactivateShaderWhenDone:(_Bool)arg3 advanceDynamicBuffer:(_Bool)arg4;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange)arg2 deactivateShaderWhenDone:(_Bool)arg3;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(_Bool)arg2 advanceDynamicBuffer:(_Bool)arg3;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(_Bool)arg2;
- (void)drawWithShader:(id)arg1 advanceDynamicBuffer:(_Bool)arg2;
- (void)drawWithShader:(id)arg1;
- (void)disableDataBufferWithShader:(id)arg1;
- (void)enableDataBufferWithShader:(id)arg1;
- (void)disableGLElementArrayBuffer;
- (void)enableGLElementArrayBuffer;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)teardown;
- (void)enableDataBuffer;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2 bufferCount:(unsigned long long)arg3;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (void)p_setupElementArrayBufferIfNecessary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

