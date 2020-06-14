//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTAdditionalHiddenRowColumnProviding-Protocol.h>
#import <iWorkImport/TSTTableHiddenRowColumnProviding-Protocol.h>

@class NSString, TSTHiddenStateExtent, TSTHiddenStatesOwner, TSTTableFilterSet;

__attribute__((visibility("hidden")))
@interface TSTHiddenStates : NSObject <TSTTableHiddenRowColumnProviding, TSTAdditionalHiddenRowColumnProviding>
{
    UUIDData_5fbc143e _hiddenStatesUid;
    TSTHiddenStateExtent *_rowHiddenStateExtent;
    TSTHiddenStateExtent *_columnHiddenStateExtent;
    TSTHiddenStatesOwner *_hiddenStatesOwner;
}

+ (id)mutableIndexSetByIntersecting:(id)arg1 withRange:(struct _NSRange)arg2;
+ (struct TSUCellCoord)filterFormulaCoordinate;
+ (struct TSUCellCoord)filterFormulaThresholdCoordinateForRow:(unsigned int)arg1;
+ (struct TSUCellCoord)filterFormulaCoordinateForRow:(unsigned int)arg1;
@property(readonly, retain, nonatomic) TSTHiddenStateExtent *columnHiddenStateExtent; // @synthesize columnHiddenStateExtent=_columnHiddenStateExtent;
@property(readonly, retain, nonatomic) TSTHiddenStateExtent *rowHiddenStateExtent; // @synthesize rowHiddenStateExtent=_rowHiddenStateExtent;
@property(nonatomic) UUIDData_5fbc143e hiddenStatesUid; // @synthesize hiddenStatesUid=_hiddenStatesUid;
@property(nonatomic) __weak TSTHiddenStatesOwner *hiddenStatesOwner; // @synthesize hiddenStatesOwner=_hiddenStatesOwner;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)copyFromHiddenStates:(id)arg1 forRange:(struct TSUCellRect)arg2 withContext:(id)arg3 isWholeTableCopy:(_Bool)arg4;
- (id)mutableAnyHiddenColumnIndexes;
- (id)mutableAnyHiddenRowIndexes;
- (id)mutableFilteredRowIndexes;
- (id)mutableUserHiddenColumnIndexes;
- (id)mutableUserHiddenRowIndexes;
- (void)swapBaseRowAtIndex:(struct TSUModelRowIndex)arg1 withRowAtIndex:(struct TSUModelRowIndex)arg2;
- (void)moveBaseColumnRange:(struct _NSRange)arg1 toColumnIndex:(struct TSUModelColumnIndex)arg2;
- (void)moveBaseRowRange:(struct _NSRange)arg1 toRowIndex:(struct TSUModelRowIndex)arg2;
- (void)moveViewColumnRange:(struct _NSRange)arg1 toColumnIndex:(struct TSUViewColumnIndex)arg2;
- (void)deleteColumnsFromBaseRange:(struct _NSRange)arg1 columnUids:(const vector_4dc5f307 *)arg2;
- (void)deleteRowsFromBaseRange:(struct _NSRange)arg1 rowUids:(const vector_4dc5f307 *)arg2;
- (void)insertNewColumnsInBaseRange:(struct _NSRange)arg1;
- (void)insertNewRowsInBaseRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) unsigned int numberOfUserHiddenColumns;
@property(readonly, nonatomic) unsigned int numberOfUserHiddenRows;
@property(readonly, nonatomic) unsigned int numberOfHiddenColumns;
@property(readonly, nonatomic) unsigned int numberOfHiddenRows;
@property(readonly, nonatomic) _Bool hasUserHiddenColumns;
@property(readonly, nonatomic) _Bool hasUserHiddenRows;
@property(readonly, nonatomic) _Bool hasHiddenColumns;
@property(readonly, nonatomic) _Bool hasHiddenRows;
@property(readonly, nonatomic) _Bool hasCollapsedRows;
- (_Bool)hasFilterRulesWithTable:(id)arg1 inBaseColumns:(id)arg2;
- (void)dirtyFilterStateForHeaders;
- (void)dirtyFilterState;
- (void)filterSetUpdated;
- (_Bool)hasActiveFilters;
- (void)setFilterSetType:(int)arg1;
- (void)enableFilterSet:(_Bool)arg1;
- (void)mutateFormulaFiltersWithTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)duplicateFilterSetInUidFormWithTable:(id)arg1;
- (id)duplicateFilterSet;
@property(nonatomic) _Bool needsFilterFormulaRewriteForImport;
@property(retain, nonatomic) TSTTableFilterSet *filterSet;
- (id)runChange:(id)arg1 withCollapsedState:(id)arg2 outUndoState:(id *)arg3;
- (id)applyCollapseExpandState:(id)arg1 outUndoState:(id *)arg2;
- (id)copyCollapsedStateToUpdatedGroupUids:(id)arg1;
- (id)collapsedGroupUids;
- (id)expandSummaryGroupUIDs:(id)arg1;
- (id)collapseSummaryGroupUIDs:(id)arg1;
- (void)setCategoryGroupUID:(const UUIDData_5fbc143e *)arg1 asCollapsed:(_Bool)arg2;
- (_Bool)isCategoryGroupUIDCollapsed:(const UUIDData_5fbc143e *)arg1;
- (_Bool)isCategoryGroupOrParentsCollapsed:(const UUIDData_5fbc143e *)arg1;
- (void)remapTableUIDsInFormulasWithMap:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2;
@property(nonatomic) _Bool needsToUpdateFilterSetForImport;
@property(nonatomic) UUIDData_5fbc143e hiddenStateOwnerForColumnsUID;
@property(nonatomic) UUIDData_5fbc143e hiddenStateOwnerForRowsUID;
- (void)setFormulaOwnerUIDsWithMap:(id)arg1;
- (void)willChangeGroupByTo:(id)arg1;
- (void)setTableInfo:(id)arg1;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1 baseOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (void)syncUpHiddenStateFormulaOwnerUIDs;
- (struct TSCERangeRef)referenceToHiddenStateFromColumn:(unsigned short)arg1 toColumn:(unsigned short)arg2;
- (struct TSCERangeRef)referenceToHiddenStateFromRow:(unsigned int)arg1 toRow:(unsigned int)arg2;
- (id)indexesOfHiddenRowsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (struct TSUModelRowIndex)numberOfUserHiddenRowsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (struct TSUModelRowIndex)numberOfHiddenRowsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (id)indexesOfHiddenColumnsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (struct TSUModelColumnIndex)numberOfHiddenColumnsInBaseCellRange:(struct TSUModelCellRect)arg1;
- (unsigned short)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnAfterColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned short)arg1;
- (unsigned int)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowAfterRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfVisibleRowBeforeRowAtIndex:(unsigned int)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned short)arg1;
- (_Bool)hasHiddenRowAtIndex:(unsigned int)arg1;
- (_Bool)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfVisibleColumnsInColumnRange:(id)arg1;
- (id)indexesOfVisibleColumnsInCellRegion:(id)arg1;
- (id)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned char)hidingActionForBaseColumnAtIndex:(struct TSUModelColumnIndex)arg1;
- (unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg1;
- (_Bool)hasHiddenColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1 forAction:(unsigned char)arg2;
- (_Bool)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfCollapsedRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfVisibleRowsInRowRange:(id)arg1;
- (id)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfVisibleRowsInCellRegion:(id)arg1;
- (id)indexesOfVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfFilteredRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (id)indexesOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned char)hidingActionForBaseRowAtIndex:(struct TSUModelRowIndex)arg1;
- (unsigned char)hidingActionForRowAtIndex:(unsigned int)arg1;
- (_Bool)hasHiddenRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (_Bool)showBaseColumnAtIndex:(struct TSUModelColumnIndex)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideBaseColumnAtIndex:(struct TSUModelColumnIndex)arg1 forAction:(unsigned char)arg2;
- (_Bool)showBaseRowAtIndex:(struct TSUModelRowIndex)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideBaseRowAtIndex:(struct TSUModelRowIndex)arg1 forAction:(unsigned char)arg2;
- (_Bool)showColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (_Bool)showRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (_Bool)hideRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (void)encodeToArchive:(struct HiddenStatesArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct HiddenStatesArchive *)arg1 unarchiver:(id)arg2 forHiddenStatesOwner:(id)arg3;
- (void)loadIndexesFromTable:(id)arg1;
- (id)initWithHiddenStatesOwner:(id)arg1;
- (id)initWithHiddenStatesOwner:(id)arg1 hiddenStatesUid:(const UUIDData_5fbc143e *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

