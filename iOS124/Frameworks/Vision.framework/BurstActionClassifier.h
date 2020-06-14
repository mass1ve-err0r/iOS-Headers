//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BurstActionClassifier : NSObject
{
    _Bool hasBeenScaled;
    double testVector[7];
    float testAverageCameraTravelDistance;
    float testMaxRegistrationErrorIntegral;
    float testMaxPeakRegistrationError;
    float testMeanPeakRegistrationError;
    float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
    float testInOutRatio;
    float testMaxInnerDistance;
    float testAverageRegistrationErrorSkewness;
    float testMinRegionOfInterestSize;
    float testMaxRegistrationErrorSkewness;
    struct __SVMParameters *_svmParameters;
}

@property struct __SVMParameters *svmParameters; // @synthesize svmParameters=_svmParameters;
@property float testMaxRegistrationErrorSkewness; // @synthesize testMaxRegistrationErrorSkewness;
@property float testMinRegionOfInterestSize; // @synthesize testMinRegionOfInterestSize;
@property float testAverageRegistrationErrorSkewness; // @synthesize testAverageRegistrationErrorSkewness;
@property float testMaxInnerDistance; // @synthesize testMaxInnerDistance;
@property float testInOutRatio; // @synthesize testInOutRatio;
@property float testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix; // @synthesize testBeginningVsEndAEMatrixVsAverageAdjacentAEMatrix;
@property float testMeanPeakRegistrationError; // @synthesize testMeanPeakRegistrationError;
@property float testMaxPeakRegistrationError; // @synthesize testMaxPeakRegistrationError;
@property float testMaxRegistrationErrorIntegral; // @synthesize testMaxRegistrationErrorIntegral;
@property float testAverageCameraTravelDistance; // @synthesize testAverageCameraTravelDistance;
- (_Bool)isBurstAction;
- (float)predictResult;
- (double)computeKernelValueWithSupportVector:(const struct BurstSupportVector *)arg1;
- (void)scaleVector;
- (id)initWithVersion:(int)arg1;
- (id)init;

@end

