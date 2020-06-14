//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNBatchNormalizationStatistics : MPSCNNKernel
{
}

+ (const struct MPSLibraryInfo *)libraryInfo;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3;
- (_Bool)appendBatchBarrier;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)initWithDevice:(id)arg1;

@end

