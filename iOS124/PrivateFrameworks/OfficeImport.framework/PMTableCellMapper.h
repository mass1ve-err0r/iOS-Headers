//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class CMStyle, OADTableCell;

__attribute__((visibility("hidden")))
@interface PMTableCellMapper : CMMapper
{
    OADTableCell *mCell;
    CMStyle *mStyle;
    int mColIndex;
    unsigned long long mRowIndex;
    float mWidth;
}

- (void).cxx_destruct;
- (float)widthWithState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(int)arg3 parent:(id)arg4;
- (void)mapCellPropertiesWithState:(id)arg1 textAnchor:(unsigned char)arg2;
- (void)mapBordersWithState:(id)arg1;
- (id)rowMapper;
- (id)tableMapper;

@end

