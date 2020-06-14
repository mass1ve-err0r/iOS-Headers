//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTTableStrokePreset : TSPObject <TSSPreset>
{
    unsigned long long mIndex;
}

- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
@property(readonly, nonatomic) NSString *presetKind;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TableStrokePresetArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)index;
- (id)initWithContext:(id)arg1;

@end

