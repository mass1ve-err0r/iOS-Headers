//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HDSQLiteQueryPlan : NSObject
{
    _Bool _includesTableScan;
    _Bool _usesIndex;
    _Bool _usesCoveringIndex;
    NSArray *_queryPlanRows;
    NSArray *_indices;
}

@property(readonly, nonatomic) NSArray *indices; // @synthesize indices=_indices;
@property(readonly, nonatomic) _Bool usesCoveringIndex; // @synthesize usesCoveringIndex=_usesCoveringIndex;
@property(readonly, nonatomic) _Bool usesIndex; // @synthesize usesIndex=_usesIndex;
@property(readonly, nonatomic) _Bool includesTableScan; // @synthesize includesTableScan=_includesTableScan;
@property(readonly, copy, nonatomic) NSArray *queryPlanRows; // @synthesize queryPlanRows=_queryPlanRows;
- (void).cxx_destruct;
- (id)description;
- (id)initWithQueryPlanRows:(id)arg1;

@end

