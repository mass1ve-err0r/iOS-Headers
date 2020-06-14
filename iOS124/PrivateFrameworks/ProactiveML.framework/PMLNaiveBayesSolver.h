//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLModelRegressor, PMLModelWeights, PMLSparseMatrix;

@interface PMLNaiveBayesSolver : NSObject
{
    PMLModelWeights *_positiveConditionalProbabilities;
    PMLModelWeights *_negativeConditionalProbabilities;
    PMLModelWeights *_probabilities;
    PMLModelWeights *_positiveConditionalCounts;
    PMLModelWeights *_negativeConditionalCounts;
    PMLModelWeights *_counts;
    PMLSparseMatrix *_covariates;
    PMLModelRegressor *_objective;
}

@property(retain) PMLModelRegressor *objective; // @synthesize objective=_objective;
@property(retain) PMLSparseMatrix *covariates; // @synthesize covariates=_covariates;
@property(retain) PMLModelWeights *counts; // @synthesize counts=_counts;
@property(retain) PMLModelWeights *negativeConditionalCounts; // @synthesize negativeConditionalCounts=_negativeConditionalCounts;
@property(retain) PMLModelWeights *positiveConditionalCounts; // @synthesize positiveConditionalCounts=_positiveConditionalCounts;
@property(retain) PMLModelWeights *probabilities; // @synthesize probabilities=_probabilities;
@property(retain) PMLModelWeights *negativeConditionalProbabilities; // @synthesize negativeConditionalProbabilities=_negativeConditionalProbabilities;
@property(retain) PMLModelWeights *positiveConditionalProbabilities; // @synthesize positiveConditionalProbabilities=_positiveConditionalProbabilities;
- (void).cxx_destruct;
- (float)predict:(id)arg1;
- (void)solve;
- (void)solveForCovariates:(id)arg1 objectives:(id)arg2;
- (id)init;
- (id)initWithProbabilities:(id)arg1 positiveConditionalProbabilities:(id)arg2 negativeConditionalProbabilities:(id)arg3;

@end

