//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLBufferLayoutDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor
{
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (void)setStepRate:(unsigned long long)arg1;
- (unsigned long long)stepRate;
- (void)setStepFunction:(unsigned long long)arg1;
- (unsigned long long)stepFunction;
- (void)setStride:(unsigned long long)arg1;
- (unsigned long long)stride;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

