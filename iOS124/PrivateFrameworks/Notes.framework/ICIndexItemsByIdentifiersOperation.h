//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation
{
    NSArray *_identifiersToIndex;
}

@property(copy, nonatomic) NSArray *identifiersToIndex; // @synthesize identifiersToIndex=_identifiersToIndex;
- (void).cxx_destruct;
- (id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1;
- (id)objectIDsToIndexFromDataSource:(id)arg1;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2;
- (id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 identifiersToIndex:(id)arg3;

@end

