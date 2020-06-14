//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, CNIndexClientState;
@protocol CNCSSearchableIndex, CNSpotlightIndexingLogger;

@interface CNIndexRequestHandler : NSObject
{
    _Bool _isFullSyncNeeded;
    CNContactStore *_contactStore;
    id <CNCSSearchableIndex> _index;
    id <CNSpotlightIndexingLogger> _logger;
    unsigned long long _batchSize;
    CNIndexClientState *_clientState;
}

@property(retain, nonatomic) CNIndexClientState *clientState; // @synthesize clientState=_clientState;
@property(nonatomic) _Bool isFullSyncNeeded; // @synthesize isFullSyncNeeded=_isFullSyncNeeded;
@property(readonly, nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, nonatomic) id <CNSpotlightIndexingLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <CNCSSearchableIndex> index; // @synthesize index=_index;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (_Bool)deleteAllSearchableItems;
- (id)_futureForDeleteAllSearchableItems;
- (_Bool)deleteSearchableItemsWithIdentifiers:(id)arg1;
- (id)_futureForDeleteSearchableItemsWithIdentifiers:(id)arg1;
- (_Bool)indexSearchableItems:(id)arg1;
- (id)_futureForIndexSearchableItems:(id)arg1;
- (_Bool)endIndexBatchWithClientState;
- (id)_futureForEndIndexBatchWithClientState:(id)arg1;
- (_Bool)beginIndexBatch;
- (_Bool)fetchLastClientState;
- (id)_futureForFetchLastClientState;
- (id)verifyIndexLoggingSummary:(_Bool)arg1 error:(id *)arg2;
- (id)fetchSearchableItemsIndexedByContactIdentifierWithError:(id *)arg1;
- (id)searchableItemsForContactIdentifiers:(id)arg1;
- (void)consumeChangeHistory:(id)arg1;
- (_Bool)batchIndexUpdatingItems:(id)arg1 deletingItemsWithIdentifiers:(id)arg2;
- (_Bool)batchIndexUpdatingItems:(id)arg1 fullSyncOffset:(long long)arg2 fullSyncDone:(_Bool)arg3;
- (_Bool)_batchIndexUpdatingItems:(id)arg1 deletingItemsWithIdentifiers:(id)arg2 fullSyncOffset:(id)arg3 fullSyncDone:(id)arg4;
- (_Bool)deltaSyncContacts:(id)arg1;
- (_Bool)fullSyncContacts;
- (_Bool)prepareForFullSync:(id)arg1;
- (void)fetchAndCheckLastClientState;
- (id)fetchChangeHistoryWithError:(id *)arg1;
- (id)fetchChangeHistory;
- (void)registerForChangeHistory;
- (void)_performIndexingWithForcedReindexing:(_Bool)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (void)reindexAllSearchableItems;
- (void)performIndexing;
- (id)initWithContactStore:(id)arg1 searchableIndex:(id)arg2 logger:(id)arg3 batchSize:(unsigned long long)arg4;
- (id)initWithContactStore:(id)arg1;

@end

