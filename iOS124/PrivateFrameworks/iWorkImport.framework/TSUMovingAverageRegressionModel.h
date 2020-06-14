//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSURegressionModel.h>

__attribute__((visibility("hidden")))
@interface TSUMovingAverageRegressionModel : TSURegressionModel
{
    int mNumTrendPoint;
    double *mTrendXValues;
    double *mTrendYValues;
}

- (double)estimateForX:(double *)arg1;
- (id)equationString;
- (struct _NSRange)superscriptRangeAtIndex:(int)arg1;
- (int)numSuperscriptRanges;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)arg1;
- (double)rSquared;
- (double)trendYValueAtIndex:(int)arg1;
- (double)trendXValueAtIndex:(int)arg1;
- (int)numTrendPoint;
- (double)coefficientAtIndex:(int)arg1;
- (int)numCoefficients;
- (int)regressionType;
- (void)dealloc;
- (id)initNonAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5;
- (id)initAffineWithMappings:(int)arg1 xs:(double *)arg2 ys:(double *)arg3 xDimension:(int)arg4;
- (id)initWithMappings:(int)arg1 xs:(id)arg2 ys:(id)arg3 numPeriod:(int)arg4;

@end

