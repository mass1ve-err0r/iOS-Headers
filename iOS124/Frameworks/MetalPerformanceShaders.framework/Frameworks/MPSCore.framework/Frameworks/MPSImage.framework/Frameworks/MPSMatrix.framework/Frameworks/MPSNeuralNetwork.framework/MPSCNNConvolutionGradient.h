//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@protocol MPSCNNConvolutionDataSource, MTLBuffer;

@interface MPSCNNConvolutionGradient : MPSCNNGradientKernel
{
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _groups;
    unsigned long long _channelMultiplier;
    unsigned long long _gradientOption;
    id <MTLBuffer> _weights;
    _Bool _fullyConnected;
    unsigned int _weightsDataType;
    id <MPSCNNConvolutionDataSource> _dataSource;
    struct _opaque_pthread_mutex_t _lock;
    _Bool _serializeWeightsAndBiases;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) _Bool serializeWeightsAndBiases; // @synthesize serializeWeightsAndBiases=_serializeWeightsAndBiases;
@property(readonly, retain, nonatomic) id <MPSCNNConvolutionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long gradientOption; // @synthesize gradientOption=_gradientOption;
@property(readonly, nonatomic) unsigned long long channelMultiplier; // @synthesize channelMultiplier=_channelMultiplier;
@property(readonly, nonatomic) unsigned long long groups; // @synthesize groups=_groups;
@property(readonly, nonatomic) unsigned long long sourceImageFeatureChannels; // @synthesize sourceImageFeatureChannels=_outputFeatureChannels;
@property(readonly, nonatomic) unsigned long long sourceGradientFeatureChannels; // @synthesize sourceGradientFeatureChannels=_inputFeatureChannels;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)PeakAtWeights:(id)arg1;
- (id)biases;
- (id)weights;
- (void)dealloc;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2;
- (void)reloadWeightsAndBiasesFromDataSource;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (void)initialize:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (void)initialize:(id)arg1 convDesc:(id)arg2 weights:(void *)arg3 dataType:(unsigned int)arg4 fullyConnected:(_Bool)arg5;
- (unsigned long long)maxBatchSize;
- (id)initWithDevice:(id)arg1;

@end

