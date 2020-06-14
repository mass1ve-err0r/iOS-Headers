//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSState.h>

@protocol MTLBuffer;

@interface MPSCNNConvolutionWeightsAndBiasesState : MPSState
{
}

+ (id)temporaryCNNConvolutionWeightsAndBiasesStateWithCommandBuffer:(id)arg1 cnnConvolutionDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 cnnConvolutionDescriptor:(id)arg2;
- (id)initWithWeights:(id)arg1 biases:(id)arg2;
@property(readonly, nonatomic) id <MTLBuffer> biases;
@property(readonly, nonatomic) id <MTLBuffer> weights;

@end

