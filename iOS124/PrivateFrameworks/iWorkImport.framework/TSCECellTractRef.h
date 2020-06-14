//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCECellTractRef : NSObject <NSCopying>
{
    struct TSUCellTractRef _cppCellTractRef;
}

+ (id)cellTractRefWithUidTractList:(id)arg1 onTable:(const UUIDData_5fbc143e *)arg2 preserveFlags:(struct TSUPreserveFlags)arg3 rewriteContext:(struct TSCEFormulaRewriteContext *)arg4;
@property(nonatomic) struct TSUCellTractRef cppCellTractRef; // @synthesize cppCellTractRef=_cppCellTractRef;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)expandUsingIndexes:(id)arg1 forRows:(_Bool)arg2;
- (id)edgeExpandUsingIndexes:(id)arg1 forRows:(_Bool)arg2;
- (_Bool)edgeExpandUsingMovingUids:(id)arg1 tractList:(id)arg2;
- (_Bool)edgeExpandTractUsingIncludeUidTract:(id)arg1 resolver:(id)arg2 forRows:(_Bool)arg3 isInverse:(_Bool)arg4;
- (id)fillInRowGapsUsingIndexes:(id)arg1;
- (id)fillInColumnGapsUsingIndexes:(id)arg1;
- (id)collapseOutRowIndexes:(id)arg1;
- (id)collapseOutColumnIndexes:(id)arg1;
- (_Bool)insertRowGapsAtIndexes:(id)arg1;
- (_Bool)insertColumnGapsAtIndexes:(id)arg1;
- (_Bool)transpose;
- (void)foreachRangeRef:(CDUnknownBlockType)arg1;
- (void)foreachCellRect:(CDUnknownBlockType)arg1;
- (void)foreachAnyRef:(CDUnknownBlockType)arg1;
- (struct TSUCellCoord)coordAtColumnOffset:(unsigned int)arg1 rowOffset:(unsigned int)arg2;
- (void)intersectWithCellRectIgnoringSpanning:(const struct TSUCellRect *)arg1;
- (void)intersectWithCellRect:(const struct TSUCellRect *)arg1;
- (id)description;
- (id)debugDescription;
- (UUIDRect_d701734b)uidTractWithCalcEngine:(id)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2;
- (void)setBottomRight:(const struct TSUCellCoord *)arg1;
- (void)setTopLeft:(const struct TSUCellCoord *)arg1;
- (struct TSCERangeRef)boundingRangeRef;
- (struct TSCERangeCoordinate)boundingRange;
- (struct TSUCellCoord)bottomRight;
- (struct TSUCellCoord)topLeft;
- (void)adjustIndexesBy:(const struct TSUColumnRowOffset *)arg1;
- (void)setRows:(const struct TSUIndexSet *)arg1;
- (void)setColumns:(const struct TSUIndexSet *)arg1;
- (const struct TSUIndexSet *)rows;
- (const struct TSUIndexSet *)columns;
- (void)removeRows:(const struct TSUIndexSet *)arg1;
- (void)removeColumns:(const struct TSUIndexSet *)arg1;
- (void)removeRowRange:(const struct TSUIndexRange *)arg1;
- (void)removeColumnRange:(const struct TSUIndexRange *)arg1;
- (void)addRows:(const struct TSUIndexSet *)arg1;
- (void)addColumns:(const struct TSUIndexSet *)arg1;
- (void)addRowRange:(const struct TSUIndexRange *)arg1;
- (void)addColumnRange:(const struct TSUIndexRange *)arg1;
- (void)addRow:(unsigned int)arg1;
- (void)addColumn:(unsigned short)arg1;
- (void)setPreserveFlagsOnSubrange:(struct TSCERangeRef *)arg1;
- (struct TSUPreserveFlags)preserveFlagsForCoord:(const struct TSUCellCoord *)arg1 preferStart:(_Bool)arg2;
- (_Bool)isPreservedRow:(unsigned int)arg1 preferStart:(_Bool)arg2;
- (_Bool)isPreservedColumn:(unsigned short)arg1 preferStart:(_Bool)arg2;
- (_Bool)isRectangularRange;
- (_Bool)isSingleCellOrSpanningRange;
- (_Bool)isSingleCell;
- (_Bool)isValid;
- (unsigned int)numRows;
- (unsigned int)numColumns;
- (_Bool)hasTableUID;
@property(nonatomic) struct TSUPreserveFlags preserveFlags;
@property(nonatomic) UUIDData_5fbc143e tableUID;
@property(nonatomic) _Bool mixedRowStartedWithPreserve;
@property(nonatomic) _Bool mixedColumnStartedWithPreserve;
@property(nonatomic) _Bool preserveRectangular;
@property(nonatomic) _Bool spansAllRows;
@property(nonatomic) _Bool spansAllColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCellRefVector:(const vector_4115f7f8 *)arg1;
- (id)initWithRangeRef:(const struct TSCERangeRef *)arg1;
- (id)initWithTopLeft:(const struct TSUCellCoord *)arg1 bottomRight:(const struct TSUCellCoord *)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (id)initWithTopLeft:(const struct TSUCellCoord *)arg1 bottomRight:(const struct TSUCellCoord *)arg2;
- (id)initWithCppCellTractRef:(const struct TSUCellTractRef *)arg1;
- (id)initWithColumns:(const struct TSUIndexSet *)arg1 rows:(const struct TSUIndexSet *)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;

@end

