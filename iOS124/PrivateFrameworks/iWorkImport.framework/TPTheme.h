//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSATheme.h>

@class TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TPTheme : TSATheme
{
}

+ (id)themeWithContext:(id)arg1 alternate:(int)arg2 withStylesheet:(id)arg3;
+ (void)initialize;
- (void)saveToArchiver:(id)arg1;
- (void)p_saveToArchive:(struct ThemeArchive *)arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)localizedBodyStyleName;
@property(readonly, nonatomic) TSWPParagraphStyle *footnoteStyle;
@property(readonly, nonatomic) TSWPParagraphStyle *headerAndFooterStyle;
@property(readonly, nonatomic) TSWPParagraphStyle *bodyStyle;
- (id)_paragraphStylePresetWithName:(id)arg1 orContentTag:(id)arg2;

@end

