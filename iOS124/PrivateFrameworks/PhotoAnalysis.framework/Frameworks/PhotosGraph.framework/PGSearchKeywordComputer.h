//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGGraph, PGSearchComputationCache;

@interface PGSearchKeywordComputer : NSObject
{
    PGGraph *_graph;
    PGSearchComputationCache *_searchComputationCache;
}

@property(readonly, nonatomic) PGSearchComputationCache *searchComputationCache; // @synthesize searchComputationCache=_searchComputationCache;
- (void).cxx_destruct;
- (void)_enumerateBusinessAndPublicEventKeywordsForEventNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)eventNodeForUUID:(id)arg1 ofType:(unsigned long long)arg2;
- (id)curationInfoForTripNode:(id)arg1;
- (id)searchInformationByTripUUIDWithTripUUIDs:(id)arg1;
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2;
- (id)searchKeywordsByEventWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2;
- (id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2;

@end

