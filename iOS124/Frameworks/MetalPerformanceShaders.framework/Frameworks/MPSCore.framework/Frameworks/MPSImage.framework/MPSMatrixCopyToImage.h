//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@interface MPSMatrixCopyToImage : MPSKernel
{
    CDStruct_67e7699a _sourceMatrixOrigin;
    unsigned long long _sourceMatrixBatchIndex;
    unsigned long long _dataLayout;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long dataLayout; // @synthesize dataLayout=_dataLayout;
@property(nonatomic) unsigned long long sourceMatrixBatchIndex; // @synthesize sourceMatrixBatchIndex=_sourceMatrixBatchIndex;
@property(nonatomic) CDStruct_14f26992 sourceMatrixOrigin; // @synthesize sourceMatrixOrigin=_sourceMatrixOrigin;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImages:(struct NSArray *)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImage:(id)arg3;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 dataLayout:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1;

@end

