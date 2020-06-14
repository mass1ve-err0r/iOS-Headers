//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

#import <MPSRayIntersector/NSCopying-Protocol.h>
#import <MPSRayIntersector/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;
@protocol MTLBuffer, MTLComputePipelineState;

@interface MPSRayIntersector : MPSKernel <NSSecureCoding, NSCopying>
{
    unsigned long long _cullMode;
    unsigned long long _frontFacingWinding;
    unsigned long long _triangleIntersectionTestType;
    unsigned long long _boundingBoxIntersectionTestType;
    unsigned long long _rayMaskOptions;
    unsigned long long _rayDataType;
    unsigned long long _intersectionDataType;
    _Bool _proRender;
    id <MTLBuffer> _dispatchIndirectBuffer;
    id <MTLComputePipelineState> _dispatchIndirectPipeline;
    unsigned long long _proRenderOptions;
    id <MTLBuffer> _shapeIndexBuffer;
    unsigned long long _shapeIndexBufferOffset;
    id <MTLBuffer> _shapeDataBuffer;
    unsigned long long _shapeDataBufferOffset;
    id <MTLBuffer> _rayIndexBuffer;
    unsigned long long _rayIndexBufferOffset;
    id <MTLBuffer> _rayMaskBuffer;
    unsigned long long _rayMaskBufferOffset;
    unsigned long long _multiHitCount;
    unsigned long long _renderLayerMask;
    MISSING_TYPE *_clippingPlane;
    unsigned long long _globalRayMask;
    unsigned long long _shapeDataStride;
    unsigned long long _shapeDataMaskOffset;
    unsigned long long _shapeDataRenderLayerOffset;
    unsigned long long _rayStride;
    unsigned long long _intersectionStride;
}

+ (_Bool)supportsSecureCoding;
+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long intersectionStride; // @synthesize intersectionStride=_intersectionStride;
@property(nonatomic) unsigned long long rayStride; // @synthesize rayStride=_rayStride;
- (void)encodeIntersectionToCommandBuffer:(id)arg1 intersectionType:(unsigned long long)arg2 rayBuffer:(id)arg3 rayBufferOffset:(unsigned long long)arg4 intersectionBuffer:(id)arg5 intersectionBufferOffset:(unsigned long long)arg6 rayCountBuffer:(id)arg7 rayCountBufferOffset:(unsigned long long)arg8 accelerationStructure:(id)arg9;
- (void)encodeIntersectionToCommandBuffer:(id)arg1 intersectionType:(unsigned long long)arg2 rayBuffer:(id)arg3 rayBufferOffset:(unsigned long long)arg4 intersectionBuffer:(id)arg5 intersectionBufferOffset:(unsigned long long)arg6 rayCount:(unsigned long long)arg7 accelerationStructure:(id)arg8;
- (id)getPipelineForIntersectionType:(unsigned long long)arg1 accelerationStructure:(id)arg2 commandBuffer:(id)arg3;
- (CDUnion_8611dee6)getHashForIntersectionType:(unsigned long long)arg1 indexing:(_Bool)arg2 indexType:(unsigned int)arg3 instancing:(_Bool)arg4 vertexStride:(unsigned long long)arg5 transformType:(unsigned long long)arg6 rootNodeType:(int)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)recommendedMinimumRayBatchSizeForRayCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (void)sharedInitRaytracer;
- (void)setShapeDataRenderLayerOffset:(unsigned long long)arg1;
- (unsigned long long)shapeDataRenderLayerOffset;
- (void)setShapeDataMaskOffset:(unsigned long long)arg1;
- (unsigned long long)shapeDataMaskOffset;
- (void)setShapeDataStride:(unsigned long long)arg1;
- (unsigned long long)shapeDataStride;
- (void)setGlobalRayMask:(unsigned long long)arg1;
- (unsigned long long)globalRayMask;
- (void)setClippingPlane: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)clippingPlane;
- (void)setRenderLayerMask:(unsigned long long)arg1;
- (unsigned long long)renderLayerMask;
- (void)setMultiHitCount:(unsigned long long)arg1;
- (unsigned long long)multiHitCount;
- (void)setRayMaskBufferOffset:(unsigned long long)arg1;
- (unsigned long long)rayMaskBufferOffset;
- (void)setRayMaskBuffer:(id)arg1;
- (id)rayMaskBuffer;
- (void)setRayIndexBufferOffset:(unsigned long long)arg1;
- (unsigned long long)rayIndexBufferOffset;
- (void)setRayIndexBuffer:(id)arg1;
- (id)rayIndexBuffer;
- (void)setShapeDataBufferOffset:(unsigned long long)arg1;
- (unsigned long long)shapeDataBufferOffset;
- (void)setShapeDataBuffer:(id)arg1;
- (id)shapeDataBuffer;
- (void)setShapeIndexBufferOffset:(unsigned long long)arg1;
- (unsigned long long)shapeIndexBufferOffset;
- (void)setShapeIndexBuffer:(id)arg1;
- (id)shapeIndexBuffer;
- (void)setProRenderOptions:(unsigned long long)arg1;
- (unsigned long long)proRenderOptions;
@property(nonatomic) unsigned long long boundingBoxIntersectionTestType;
@property(nonatomic) unsigned long long triangleIntersectionTestType;
@property(nonatomic) unsigned long long intersectionDataType;
@property(nonatomic) unsigned long long rayDataType;
@property(nonatomic) unsigned long long rayMaskOptions;
@property(nonatomic) unsigned long long frontFacingWinding;
@property(nonatomic) unsigned long long cullMode;

@end

