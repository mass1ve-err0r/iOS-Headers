//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSState.h>

@protocol MTLBuffer;

@interface MPSCNNNormalizationGammaAndBetaState : MPSState
{
    _Bool _initialized;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithGamma:(id)arg1 beta:(id)arg2;
- (id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2;
@property(readonly, nonatomic) id <MTLBuffer> beta;
@property(readonly, nonatomic) id <MTLBuffer> gamma;

@end

