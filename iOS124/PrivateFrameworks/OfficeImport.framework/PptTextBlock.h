//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface PptTextBlock : NSObject
{
    struct PptTextHeaderAtom *mTextHeader;
    NSMutableString *mText;
    struct PptTextBlockStylingAtom *mStyleText;
    struct PptTextBlockSpecialInfoAtom *mSpecialInfo;
    NSMutableArray *mMetaCharacterFields;
    NSMutableArray *mBookmarks;
    NSMutableArray *mHyperlinks;
    struct PptTextRulerAtom *mTextRuler;
}

- (struct PptSpecialInfoRun *)specialInfoRunAtIndex:(int)arg1;
- (int)specialInfoRunCount;
- (struct PptCharRun *)characterRunAtIndex:(int)arg1;
- (int)characterRunCount;
- (struct PptParaRun *)paragraphRunAtIndex:(int)arg1;
- (int)paragraphRunCount;
- (struct PptTextRulerAtom *)textRuler;
- (id)bookmarks;
- (id)hyperlinks;
- (id)metaCharacterFields;
- (id)text;
- (unsigned int)textIndex;
- (int)textType;
- (void)writeTextBlock:(id)arg1;
- (void)readTextBlock:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;
- (void)readSpecialInfo:(id)arg1;
- (void)readStyles:(id)arg1;
- (void)readString:(id)arg1;

@end

