//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSLock, NSMutableDictionary, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSUUUIDSetStore : NSObject <NSCopying>
{
    NSLock *_lock;
    TSUSparseArray *_uuidSetForIndex;
    NSMutableDictionary *_indexesUsingUuid;
    unsigned int _highestIndex;
}

- (void).cxx_destruct;
- (unsigned int)addSetForSingleUuid:(const UUIDData_5fbc143e *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long count;
- (void)foreachUuidSet:(CDUnknownBlockType)arg1;
- (id)subsetStoreForIndexes:(id)arg1;
- (void)_foreachUuidSet:(CDUnknownBlockType)arg1;
- (id)indexesUsingAnyOfUuids:(const vector_4dc5f307 *)arg1;
- (id)indexesUsingUuid:(const UUIDData_5fbc143e *)arg1;
- (_Bool)containsUuidSet:(id)arg1;
- (unsigned int)indexOfSet:(id)arg1;
- (id)setForIndex:(unsigned int)arg1;
- (void)removeSetAtIndex:(unsigned int)arg1;
- (void)p_addSet:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)addSetForUuids:(const vector_4dc5f307 *)arg1;
- (unsigned int)addSet:(id)arg1;
- (id)description;
- (id)init;
- (id)initFromMessage:(const struct UuidSetStoreArchive *)arg1;
- (void)encodeToArchive:(struct UuidSetStoreArchive *)arg1;

@end

