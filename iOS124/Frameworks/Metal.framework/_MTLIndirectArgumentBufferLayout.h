//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _MTLIndirectArgumentBufferLayout : NSObject
{
}

- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned int hashSignature;
@property(readonly) unsigned int hashMask;
@property(readonly) unsigned int hashOffset;
@property(readonly) unsigned int hashValue;
@property(readonly) unsigned long long alignment; // @dynamic alignment;
@property(readonly) unsigned long long encodedLength; // @dynamic encodedLength;
@property(readonly) _Bool bufferLayoutMatchesFrontEndLayout; // @dynamic bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end

