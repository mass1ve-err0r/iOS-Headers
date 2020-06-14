//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLModelRegressor, PMLSparseMatrix;

@interface PMLTrainingStoredSessionBatch : NSObject
{
    PMLSparseMatrix *_covariates;
    PMLModelRegressor *_outcomes;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) PMLModelRegressor *outcomes; // @synthesize outcomes=_outcomes;
@property(readonly, nonatomic) PMLSparseMatrix *covariates; // @synthesize covariates=_covariates;
- (void).cxx_destruct;
- (id)minibatchStatsForPositiveLabels:(id)arg1;
- (id)minibatchStats;
- (id)minibatchStatsForPositiveLabel:(unsigned long long)arg1;
- (id)initWithCovariates:(id)arg1 outcomes:(id)arg2;

@end

