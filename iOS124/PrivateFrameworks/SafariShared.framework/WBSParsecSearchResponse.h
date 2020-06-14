//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WBSParsecSearchCompletionResultSet;

@interface WBSParsecSearchResponse : NSObject
{
    WBSParsecSearchCompletionResultSet *_bestResultSet;
    double _maxAge;
    unsigned long long _sizeInBytes;
    NSArray *_completionResultSets;
}

+ (id)searchResponseSchemaWithCache:(id)arg1;
@property(readonly, nonatomic) NSArray *completionResultSets; // @synthesize completionResultSets=_completionResultSets;
@property(readonly, nonatomic) unsigned long long sizeInBytes; // @synthesize sizeInBytes=_sizeInBytes;
@property(readonly, nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *statusCodesForCompletionResultSets;
@property(readonly, nonatomic) WBSParsecSearchCompletionResultSet *bestCompletionResultSet;
- (id)initWithArray:(id)arg1 responseHeaders:(id)arg2 sizeInBytes:(unsigned long long)arg3 cache:(id)arg4;

@end

