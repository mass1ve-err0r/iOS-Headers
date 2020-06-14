//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDParagraph : WDBlock
{
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

- (id)description;
- (_Bool)isEmpty;
- (int)blockType;
- (id)newRunIterator;
- (id)runIterator;
- (void)removeLastCharacter:(unsigned short)arg1;
- (float)maxReflectionDistance;
- (id)addDateTime:(id)arg1;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (id)addBookmark;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (id)addHyperlinkFieldMarker:(int)arg1;
- (id)addHyperlinkFieldMarker;
- (id)addFieldMarker:(int)arg1;
- (id)addFieldMarker;
- (id)addEndnote;
- (id)addFootnote;
- (id)addAnnotation:(int)arg1;
- (id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)addCharacterRun;
- (void)clearRuns;
- (void)removeRun:(id)arg1;
- (void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addRun:(id)arg1;
- (id)runAt:(unsigned long long)arg1;
- (unsigned long long)runCount;
- (id)runs;
- (void)clearProperties;
- (id)properties;
- (void)dealloc;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (id)initWithText:(id)arg1;
- (_Bool)isContinuationOf:(id)arg1;
- (_Bool)isTextFrame;

@end

