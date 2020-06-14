//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EMCellMapper : CMMapper
{
    struct EDCellHeader *edCell;
    EDReference *edMergedCellReference;
    int rowNumber;
    int firstColumn;
    int lastColumn;
    int columnSpan;
    _Bool firstCellFlag;
    _Bool spreadLeftFlag;
    double columnWidth;
}

+ (_Bool)isCellEmpty:(struct EDCellHeader *)arg1;
- (void).cxx_destruct;
- (void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3 nextCell:(struct EDCellHeader *)arg4;
- (void)mapRowColSpansAt:(id)arg1 withState:(id)arg2;
- (void)adjustColumnSpanForGrid:(double *)arg1 columnCount:(unsigned long long)arg2 nextCell:(struct EDCellHeader *)arg3 withState:(id)arg4;
- (_Bool)isCellMerged;
- (_Bool)isCellSpreading:(id)arg1;
- (_Bool)isFirstCell;
- (void)setFirstCellFlag;
- (_Bool)isCellEmpty;
- (int)columnSpan;
- (void)resetColumnSpan:(int)arg1;
- (double)columnWidth;
- (void)setFirstColumn:(int)arg1;
- (int)firstColumn;
- (void)setLastColumn:(int)arg1;
- (int)lastColumn;
- (id)initWithEDCell:(struct EDCellHeader *)arg1 rowInfo:(struct EDRowInfo *)arg2 parent:(id)arg3 state:(id)arg4;
- (id)initWithParent:(id)arg1;
- (id)mapHyperlink:(id)arg1 at:(id)arg2;

@end

