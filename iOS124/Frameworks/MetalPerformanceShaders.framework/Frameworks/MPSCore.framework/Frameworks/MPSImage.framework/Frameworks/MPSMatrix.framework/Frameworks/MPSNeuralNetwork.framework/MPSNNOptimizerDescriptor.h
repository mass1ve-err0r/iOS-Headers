//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSNNOptimizerDescriptor : NSObject
{
    float _learningRate;
    float _gradientRescale;
    _Bool _applyGradientClipping;
    float _gradientClipMax;
    float _gradientClipMin;
    unsigned long long _regularizationType;
    float _regularizationScale;
}

+ (id)optimizerDescriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(_Bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(unsigned long long)arg6 regularizationScale:(float)arg7;
+ (id)optimizerDescriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(unsigned long long)arg3 regularizationScale:(float)arg4;
@property(nonatomic) float regularizationScale; // @synthesize regularizationScale=_regularizationScale;
@property(nonatomic) unsigned long long regularizationType; // @synthesize regularizationType=_regularizationType;
@property(nonatomic) float gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(nonatomic) float gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(nonatomic) _Bool applyGradientClipping; // @synthesize applyGradientClipping=_applyGradientClipping;
@property(nonatomic) float gradientRescale; // @synthesize gradientRescale=_gradientRescale;
@property(nonatomic) float learningRate; // @synthesize learningRate=_learningRate;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(unsigned long long)arg3 regularizationScale:(float)arg4;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(_Bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(unsigned long long)arg6 regularizationScale:(float)arg7;

@end

