//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice;

@protocol MTLComputePipelineState <NSObject>
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
@property(readonly) unsigned long long threadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@end

