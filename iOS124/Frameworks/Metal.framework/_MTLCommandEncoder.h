//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLDevice;

@interface _MTLCommandEncoder : NSObject
{
    id <MTLDevice> _device;
    NSString *_label;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    unsigned long long _numThisEncoder;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
}

@property(nonatomic) unsigned long long numThisEncoder; // @synthesize numThisEncoder=_numThisEncoder;
@property(nonatomic, getter=globalTraceObjectID) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly) unsigned long long dispatchType; // @dynamic dispatchType;
- (void)memoryBarrierNotificationWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=getType) unsigned long long type;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)endEncoding;
- (id)commandBuffer;
@property(readonly, nonatomic) id <MTLDevice> device;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;

@end

