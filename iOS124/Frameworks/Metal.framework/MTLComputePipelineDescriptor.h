//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLPipelineBufferDescriptorArray, MTLStageInputOutputDescriptor, NSString;
@protocol MTLFunction;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

// Remaining properties
@property(readonly) MTLPipelineBufferDescriptorArray *buffers; // @dynamic buffers;
@property(retain, nonatomic) id <MTLFunction> computeFunction; // @dynamic computeFunction;
@property(nonatomic) _Bool forceResourceIndex; // @dynamic forceResourceIndex;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; // @dynamic maxTotalThreadsPerThreadgroup;
@property(nonatomic) unsigned long long resourceIndex; // @dynamic resourceIndex;
@property(copy, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor; // @dynamic stageInputDescriptor;
@property(nonatomic) _Bool threadGroupSizeIsMultipleOfThreadExecutionWidth; // @dynamic threadGroupSizeIsMultipleOfThreadExecutionWidth;

@end

