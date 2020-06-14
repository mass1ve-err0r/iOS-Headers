//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTCellStyle, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTTableHeaderInfo : NSObject
{
    unsigned char _hidingState;
    unsigned int _numberOfCells;
    TSTCellStyle *_cellStyle;
    TSWPParagraphStyle *_textStyle;
    double _size;
}

@property(nonatomic) unsigned int numberOfCells; // @synthesize numberOfCells=_numberOfCells;
@property(nonatomic) unsigned char hidingState; // @synthesize hidingState=_hidingState;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;
- (void)updateFromMetadata:(id)arg1;
- (void)encodeToArchive:(struct HeaderStorageBucket_Header *)arg1 archiver:(id)arg2 index:(unsigned int)arg3;
- (id)initFromArchive:(const struct HeaderStorageBucket_Header *)arg1 unarchiver:(id)arg2 outIndex:(unsigned int *)arg3;
@property(readonly, nonatomic) _Bool hasContent;
- (id)description;

@end

