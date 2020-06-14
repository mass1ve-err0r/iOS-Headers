//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNSpatialNormalizationGradientNode : MPSNNGradientFilterNode
{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    float _alpha;
    float _beta;
    float _delta;
}

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelSize:(unsigned long long)arg4;
@property(nonatomic) float delta; // @synthesize delta=_delta;
@property(nonatomic) float beta; // @synthesize beta=_beta;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelSize:(unsigned long long)arg4;

@end

