//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLVertexAttributeDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLVertexAttributeDescriptorInternal : MTLVertexAttributeDescriptor
{
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)arg1;
- (unsigned long long)bufferIndex;
- (void)setFormat:(unsigned long long)arg1;
- (unsigned long long)format;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

