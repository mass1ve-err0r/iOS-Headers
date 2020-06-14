//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDTCell.h>

__attribute__((visibility("hidden")))
@interface GQDTGroupingCell : GQDTCell
{
    unsigned short mLevel;
    unsigned short mRowIdx;
    unsigned short mRowCount;
    _Bool mIsCollapsed;
    id mValue;
    id mFormat;
    struct __CFBundle *mProcessorBundle;
    _Bool mHasValidFormulaValue;
    struct __CFString *mFormulaValue;
}

+ (struct __CFString *)displayTypeString:(int)arg1;
- (_Bool)hasFormulaValue;
- (struct __CFString *)createFormattedValue;
- (id)value;
- (_Bool)isCollapsed;
- (unsigned short)rowCount;
- (unsigned short)rowIdx;
- (unsigned short)level;
- (void)dealloc;
- (int)readAttributes:(struct _xmlTextReader *)arg1;
- (void)setProcessorBundle:(struct __CFBundle *)arg1;
- (int)readRootFormat:(struct _xmlTextReader *)arg1;
- (int)readElement:(struct _xmlTextReader *)arg1;
- (int)readValue:(struct _xmlTextReader *)arg1;

@end

