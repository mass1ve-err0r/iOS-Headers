//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPSNeuralNetwork/NSCopying-Protocol.h>

@interface MPSCNNLossDescriptor : NSObject <NSCopying>
{
    unsigned int _lossType;
    int _reductionType;
    float _weight;
    float _labelSmoothing;
    unsigned long long _numberOfClasses;
    float _epsilon;
    float _delta;
}

+ (id)cnnLossDescriptorWithType:(unsigned int)arg1 reductionType:(int)arg2;
@property(nonatomic) float delta; // @synthesize delta=_delta;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) unsigned long long numberOfClasses; // @synthesize numberOfClasses=_numberOfClasses;
@property(nonatomic) float labelSmoothing; // @synthesize labelSmoothing=_labelSmoothing;
@property(nonatomic) float weight; // @synthesize weight=_weight;
@property(nonatomic) int reductionType; // @synthesize reductionType=_reductionType;
@property(nonatomic) unsigned int lossType; // @synthesize lossType=_lossType;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

