//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNUnaryReductionNode : MPSNNFilterNode
{
    CDStruct_1e3be3a8 _clipRectSource;
}

+ (id)nodeWithSource:(id)arg1;
@property(nonatomic) CDStruct_1e3be3a8 clipRectSource; // @synthesize clipRectSource=_clipRectSource;
- (id)gradientFilterWithSource:(id)arg1;
- (id)initWithSource:(id)arg1;

@end

