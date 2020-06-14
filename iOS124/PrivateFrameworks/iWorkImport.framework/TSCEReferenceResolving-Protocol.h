//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, TSCECalculationEngine, TSUMutableUUIDSet;

@protocol TSCEReferenceResolving <NSObject>
- (TSUMutableUUIDSet *)UIDSetForIndexes:(NSIndexSet *)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)UIDsForRange:(struct _NSRange)arg1 isRows:(_Bool)arg2;
- (NSMutableIndexSet *)mutableIndexesForUIDs:(const vector_4dc5f307 *)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)UIDsForIndexes:(NSIndexSet *)arg1 isRows:(_Bool)arg2;
- (UUIDData_5fbc143e)UIDForIndex:(unsigned int)arg1 isRows:(_Bool)arg2;
- (vector_4dc5f307)columnUIDsForColumnRange:(struct _NSRange)arg1;
- (NSMutableIndexSet *)mutableColumnIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)columnUIDsForColumnIndexes:(NSIndexSet *)arg1;
- (unsigned short)columnIndexForColumnUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)columnUIDForColumnIndex:(unsigned short)arg1;
- (vector_4dc5f307)rowUIDsForRowRange:(struct _NSRange)arg1;
- (NSMutableIndexSet *)mutableRowIndexesForUIDs:(const vector_4dc5f307 *)arg1;
- (vector_4dc5f307)rowUIDsForRowIndexes:(NSIndexSet *)arg1;
- (unsigned int)rowIndexForRowUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)rowUIDForRowIndex:(unsigned int)arg1;
- (NSString *)tableName;
- (NSString *)sheetName;
- (UUIDData_5fbc143e)groupByUID;
- (UUIDData_5fbc143e)conditionalStyleFormulaOwnerUID;
- (struct TSCERangeCoordinate)tableRangeCoordinate;
- (UUIDData_5fbc143e)resolverUID;
- (id)tableInfo;
- (id)drawableInfo;
- (TSCECalculationEngine *)calcEngine;
@end

