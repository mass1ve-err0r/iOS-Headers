//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class BRCClientZone, BRCLocalItem, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface BRCSyncUpEnumerator : NSEnumerator
{
    unsigned int _batchSize;
    unsigned int _maxDepth;
    BRCClientZone *_clientZone;
    NSMutableSet *_whitelist;
    NSMutableSet *_itemIDsLostOrThrottled;
    NSMutableSet *_itemIDsNeedingOSUpgrade;
    NSMutableDictionary *_tombstonesEmbargo;
    NSMutableIndexSet *_returned;
    struct PQLResultSet *_enumerator;
    NSMutableArray *_stack;
    int _stage;
    unsigned long long _retryAfter;
    BRCLocalItem *_itemNeedingPCSChaining;
    NSMutableSet *_chainedParentIDWhitelist;
    NSMutableSet *_shareRecordIDsNeedingDelete;
}

@property(readonly, nonatomic) NSMutableSet *shareRecordIDsNeedingDelete; // @synthesize shareRecordIDsNeedingDelete=_shareRecordIDsNeedingDelete;
@property(readonly, nonatomic) NSMutableSet *chainedParentIDWhitelist; // @synthesize chainedParentIDWhitelist=_chainedParentIDWhitelist;
@property(readonly, nonatomic) BRCLocalItem *itemNeedingPCSChaining; // @synthesize itemNeedingPCSChaining=_itemNeedingPCSChaining;
@property(readonly, nonatomic) unsigned long long retryAfter; // @synthesize retryAfter=_retryAfter;
@property(readonly, nonatomic) unsigned int batchSize; // @synthesize batchSize=_batchSize;
- (void).cxx_destruct;
- (id)nextObject;
- (id)_nextTombstone;
- (id)_nextLiveItem;
- (_Bool)handleItemForOSUpgrade:(id)arg1 parentItemID:(id)arg2;
- (_Bool)isBlackListed:(id)arg1;
- (_Bool)_blackListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg1 now:(unsigned long long)arg2;
- (void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3;
- (void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 descendantBlock:(CDUnknownBlockType)arg4;
- (struct PQLResultSet *)_tombstoneLeavesNeedingSyncUpEnumerator;
- (struct PQLResultSet *)_liveOrNewDirectoriesNeedingSyncUpEnumerator;
- (struct PQLResultSet *)_documentsOrAliasesNeedingSyncUpEnumerator;
- (void)invalidate;
- (id)initWithClientZone:(id)arg1;

@end

