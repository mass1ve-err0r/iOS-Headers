//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDBucket : NSObject
{
    _Bool _hasInclusiveUpperBound;
    double _lowerInclusiveBound;
    double _upperBound;
    unsigned long long _count;
    NSString *_label;
}

@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) _Bool hasInclusiveUpperBound; // @synthesize hasInclusiveUpperBound=_hasInclusiveUpperBound;
@property(nonatomic) double upperBound; // @synthesize upperBound=_upperBound;
@property(nonatomic) double lowerInclusiveBound; // @synthesize lowerInclusiveBound=_lowerInclusiveBound;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

