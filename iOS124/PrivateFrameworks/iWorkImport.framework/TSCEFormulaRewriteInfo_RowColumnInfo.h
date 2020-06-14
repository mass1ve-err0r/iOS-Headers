//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, TSCEFormulaRewrite_Uids, TSUMutableUUIDSet, TSUUUIDSet;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewriteInfo_RowColumnInfo : NSObject
{
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _conditionalStyleOwnerUID;
    UUIDData_5fbc143e _groupByUID;
    TSCEFormulaRewrite_Uids *_rowOrColumnUids;
    vector_4dc5f307 _rowOrColumnUuids;
    _Bool _isRows;
    NSArray *_rangeEntries;
    struct TSCERangeCoordinate _tableRange;
    TSCEFormulaRewriteInfo_RowColumnInfo *_auxRowColumnInfo;
    TSUMutableUUIDSet *_expandedRowColumnUuids;
    UUIDData_5fbc143e _insertAtUid;
    UUIDData_5fbc143e _insertOppositeUid;
    _Bool _useWholeTableForInsertionDependencies;
}

@property(nonatomic) _Bool useWholeTableForInsertionDependencies; // @synthesize useWholeTableForInsertionDependencies=_useWholeTableForInsertionDependencies;
@property(nonatomic) UUIDData_5fbc143e insertOppositeUid; // @synthesize insertOppositeUid=_insertOppositeUid;
@property(nonatomic) UUIDData_5fbc143e insertAtUid; // @synthesize insertAtUid=_insertAtUid;
@property(readonly, retain, nonatomic) TSUUUIDSet *expandedRowColumnUuids; // @synthesize expandedRowColumnUuids=_expandedRowColumnUuids;
@property(retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo *auxRowColumnInfo; // @synthesize auxRowColumnInfo=_auxRowColumnInfo;
@property(readonly, nonatomic) const vector_4dc5f307 *rowOrColumnUuids; // @synthesize rowOrColumnUuids=_rowOrColumnUuids;
@property(readonly, retain, nonatomic) TSCEFormulaRewrite_Uids *rowOrColumnUids; // @synthesize rowOrColumnUids=_rowOrColumnUids;
@property(readonly, nonatomic) _Bool isRows; // @synthesize isRows=_isRows;
@property(readonly, nonatomic) const UUIDData_5fbc143e *groupByUID; // @synthesize groupByUID=_groupByUID;
@property(readonly, nonatomic) const UUIDData_5fbc143e *conditionalStyleOwnerUID; // @synthesize conditionalStyleOwnerUID=_conditionalStyleOwnerUID;
@property(readonly, nonatomic) const UUIDData_5fbc143e *tableUID; // @synthesize tableUID=_tableUID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (vector_4dc5f307)uuidsForIndexes:(id)arg1;
- (vector_4dc5f307)uuidsInRange:(struct _NSRange)arg1;
- (vector_f772ab4d)coordRangesForInsertRemove;
- (struct TSCERangeCoordinate)affectedRangeForMoveRows;
- (struct TSCERangeCoordinate)affectedRangeForInsertRows;
- (struct TSCERangeCoordinate)affectedRangeForRemoveRows;
- (struct TSCERangeCoordinate)tableRange;
@property(readonly, retain, nonatomic) NSIndexSet *rowOrColumnIndices;
- (unsigned int)rowIndexForUuid:(const UUIDData_5fbc143e *)arg1;
- (unsigned short)columnIndexForUuid:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)uuidForIndex:(unsigned int)arg1;
- (_Bool)indexIsAffected:(unsigned int)arg1;
- (struct TSCECellRef)originalCellRefForRewriteType:(int)arg1 updatedCellRef:(const struct TSCECellRef *)arg2;
- (struct TSCECellRef)updatedCellRefForRewriteType:(int)arg1 originalCellRef:(const struct TSCECellRef *)arg2;
- (unsigned int)offsetForUpdatedRowIndex:(unsigned int)arg1 isRemoveRows:(_Bool)arg2;
- (unsigned int)offsetForRowIndex:(unsigned int)arg1;
- (void)unloadIndexes;
- (void)createAuxRowColumnInfoForMove;
- (void)loadIndexesForTable:(id)arg1 uidResolver:(id)arg2 forRemoveRows:(_Bool)arg3 shuffleMap:(id)arg4;
- (vector_4dc5f307)orderedUuidsForRange:(struct _NSRange)arg1 inTable:(id)arg2 areRows:(_Bool)arg3 shuffleMap:(id)arg4;
- (void)saveToMessage:(struct ColumnOrRowUuidsInfoArchive *)arg1;
- (id)initFromMessage:(const struct ColumnOrRowUuidsInfoArchive *)arg1;
@property(readonly, nonatomic) _Bool isColumns;
- (_Bool)isForTable:(const UUIDData_5fbc143e *)arg1;
- (id)initWithTableUID:(const UUIDData_5fbc143e *)arg1 condStyleOwnerUID:(const UUIDData_5fbc143e *)arg2 groupByUID:(const UUIDData_5fbc143e *)arg3 uuids:(const vector_4dc5f307 *)arg4 atIndexes:(const vector_12da65de *)arg5 areRows:(_Bool)arg6;
- (id)initWithFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1 uuids:(const vector_4dc5f307 *)arg2 areRows:(_Bool)arg3;

@end

