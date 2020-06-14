//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLSamplerDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor
{
    struct MTLSamplerDescriptorPrivate _private;
}

- (const struct MTLSamplerDescriptorPrivate *)descriptorPrivate;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setResourceIndex:(unsigned long long)arg1;
- (unsigned long long)resourceIndex;
- (void)setForceResourceIndex:(_Bool)arg1;
- (_Bool)forceResourceIndex;
- (void)setSupportArgumentBuffers:(_Bool)arg1;
- (_Bool)supportArgumentBuffers;
- (void)setCompareFunction:(unsigned long long)arg1;
- (unsigned long long)compareFunction;
- (void)setLodAverage:(_Bool)arg1;
- (_Bool)lodAverage;
- (void)setLodBias:(float)arg1;
- (float)lodBias;
- (void)setLodMaxClamp:(float)arg1;
- (float)lodMaxClamp;
- (void)setLodMinClamp:(float)arg1;
- (float)lodMinClamp;
- (void)setNormalizedCoordinates:(_Bool)arg1;
- (_Bool)normalizedCoordinates;
- (void)setRAddressMode:(unsigned long long)arg1;
- (unsigned long long)rAddressMode;
- (void)setTAddressMode:(unsigned long long)arg1;
- (unsigned long long)tAddressMode;
- (void)setSAddressMode:(unsigned long long)arg1;
- (unsigned long long)sAddressMode;
- (void)setMaxAnisotropy:(unsigned long long)arg1;
- (unsigned long long)maxAnisotropy;
- (void)setMipFilter:(unsigned long long)arg1;
- (unsigned long long)mipFilter;
- (void)setMagFilter:(unsigned long long)arg1;
- (unsigned long long)magFilter;
- (void)setMinFilter:(unsigned long long)arg1;
- (unsigned long long)minFilter;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

