//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDMatchingAlgorithm : NSObject
{
    long long *mCostMatrix;
    char *mMaskMatrix;
    _Bool *mIsStarInColumn;
    _Bool *mIsStarInRow;
    _Bool *mIsColCovered;
    _Bool *mIsRowCovered;
    id *mObjectMapping;
    long long mMatrixDimension;
    long long mZ0Row;
    long long mZ0Col;
    NSMutableArray *mResults;
}

+ (id)bestMatchesFromArray:(id)arg1;
- (id)p_bestMatchesFromArray:(id)arg1;
- (int)p_doStep6;
- (int)p_doStep5;
- (int)p_doStep4;
- (int)p_step4IndexOfStarredZeroInRow:(int)arg1;
- (_Bool)p_step4FindAZeroAndReturnRow:(int *)arg1 column:(int *)arg2;
- (int)p_doStep3;
- (int)p_doStep2;
- (int)p_doStep1;
- (void)p_deallocateMatrices;
- (void)p_allocateMatrices;

@end

