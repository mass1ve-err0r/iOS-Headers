//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIBlendKernel;

@interface CIRenderDestination : NSObject
{
    void *_priv;
}

- (id)debugDescription;
- (id)description;
- (id)imageRepresentation;
- (void)setLabel:(id)arg1;
- (id)label;
@property _Bool blendsInDestinationColorSpace;
@property(retain, nonatomic) CIBlendKernel *blendKernel;
@property(nonatomic) struct CGColorSpace *colorSpace;
- (int)format;
@property(getter=isClamped) _Bool clamped;
- (int)ditherDepth;
@property(getter=isDithered) _Bool dithered;
@property(getter=isFlipped) _Bool flipped;
@property unsigned long long alphaMode;
@property(readonly) unsigned long long height;
@property(readonly) unsigned long long width;
- (id)initWithBitmapData:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;
- (id)initWithGLTexture:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(CDUnknownBlockType)arg5;
- (id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelBufferProvider:(CDUnknownBlockType)arg5;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
- (struct RenderTask *)_render:(struct Image *)arg1 withContext:(struct Context *)arg2;
- (void)dealloc;
- (id)_initWithInternalRenderDestination:(struct RenderDestination *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(struct CGColorSpace *)arg5;
- (struct RenderDestination *)_internalRenderDestination;
- (struct CIRenderDestinationInternal *)_internalRepresentation;
- (id)init;

@end

