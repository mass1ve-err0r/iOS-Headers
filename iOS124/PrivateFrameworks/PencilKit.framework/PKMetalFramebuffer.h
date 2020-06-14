//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLDevice, MTLTexture;

@interface PKMetalFramebuffer : NSObject
{
    _Bool _isPurgeable;
    _Bool _memoryless;
    _Bool _backedByIOSurface;
    id <MTLTexture> _colorTexture;
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    struct __CVBuffer *_pixelBuffer;
    unsigned long long _sampleCount;
    struct CGSize _size;
}

@property(readonly, nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(readonly, nonatomic) _Bool backedByIOSurface; // @synthesize backedByIOSurface=_backedByIOSurface;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(readonly, nonatomic) _Bool memoryless; // @synthesize memoryless=_memoryless;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) id <MTLTexture> colorTexture; // @synthesize colorTexture=_colorTexture;
- (void).cxx_destruct;
- (void)makePurgeable;
- (_Bool)makeNonPurgeable;
- (void)createColorTextureIfNecessary;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2 device:(id)arg3 memoryless:(_Bool)arg4 backedByIOSurface:(_Bool)arg5 sampleCount:(unsigned long long)arg6;
- (id)init;

@end

