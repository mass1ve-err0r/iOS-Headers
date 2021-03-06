/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXArrayChangeDetails : NSObject <NSCopying, NSMutableCopying> {
    NSIndexSet * _changedIndexes;
    NSIndexSet * _insertedIndexes;
    const struct __CFArray { } * _movesFromIndexes;
    NSIndexSet * _movesToIndexes;
    NSIndexSet * _removedIndexes;
}

@property (nonatomic, readonly) NSIndexSet *changedIndexes;
@property (nonatomic, readonly) bool hasAnyChanges;
@property (nonatomic, readonly) bool hasAnyInsertionsRemovalsOrMoves;
@property (nonatomic, readonly) bool hasIncrementalChanges;
@property (nonatomic, readonly) bool hasMoves;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) const struct __CFArray { }*movesFromIndexes;
@property (nonatomic, readonly) NSIndexSet *movesToIndexes;
@property (nonatomic, readonly) NSIndexSet *removedIndexes;

+ (bool)_mutableCopyInputs;
+ (id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3;
+ (id)changeDetailsFromFetchResultChangeDetails:(id)arg1;
+ (id)changeDetailsWithChangedIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)changeDetailsWithChangedIndexes:(id)arg1;
+ (id)changeDetailsWithInsertedIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)changeDetailsWithMovedFromIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)changeDetailsWithNoChanges;
+ (id)changeDetailsWithNoIncrementalChanges;
+ (id)changeDetailsWithOldKeyItemIndex:(long long)arg1 oldCount:(long long)arg2 newKeyItemIndex:(long long)arg3 newCount:(long long)arg4;
+ (id)changeDetailsWithRemovedIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out bool*)arg3;
+ (unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out bool*)arg3;

- (void).cxx_destruct;
- (void)applyToDictionary:(id)arg1 removalHandler:(id /* block */)arg2 moveHandler:(id /* block */)arg3;
- (void)applyToIndexSet:(id)arg1;
- (bool)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)arg1;
- (id)changeDetailsByAddingChangeDetails:(id)arg1;
- (id)changeDetailsByAddingChangedIndexes:(id)arg1;
- (id)changeDetailsShiftedBy:(long long)arg1;
- (id)changeDetailsShiftedBy:(long long)arg1 scaledBy:(long long)arg2;
- (id)changedIndexes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateMovedIndexesUsingBlock:(id /* block */)arg1;
- (void)enumerateMovedRangesUsingBlock:(id /* block */)arg1;
- (bool)hasAnyChanges;
- (bool)hasAnyInsertionsRemovalsOrMoves;
- (bool)hasIncrementalChanges;
- (bool)hasMoves;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;
- (id)indexSetAfterApplyingChangesToIndexSet:(id)arg1;
- (id)indexSetAfterRevertingChangesToIndexSet:(id)arg1;
- (id)init;
- (id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const struct __CFArray { }*)arg4 changedIndexes:(id)arg5;
- (id)insertedIndexes;
- (bool)isEqual:(id)arg1;
- (const struct __CFArray { }*)movesFromIndexes;
- (id)movesToIndexes;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)removedIndexes;

@end
