//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBParagraph : NSObject
{
}

+ (int)blockType;
+ (void)readFrom:(id)arg1 textRun:(struct WrdParagraphTextRun *)arg2 paragraph:(id)arg3;
+ (void)readAnnotationBookmarkFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)readBookmarkFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)readFieldMarkerFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)readAnnotationFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)readNoteFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)readSymbolsFor:(id)arg1 from:(id)arg2 textRun:(struct WrdCharacterTextRun *)arg3;
+ (void)readSpecialCharacterFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(struct WrdCharacterTextRun *)arg4;
+ (void)readPictureFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(struct WrdCharacterTextRun *)arg4;
+ (void)readOfficeArtFor:(id)arg1 from:(id)arg2 at:(int)arg3 textRun:(struct WrdCharacterTextRun *)arg4;
+ (void)readSpecialCharactersFor:(id)arg1 from:(id)arg2 textRun:(struct WrdCharacterTextRun *)arg3;
+ (void)checkForAnnotationBookmarkFrom:(id)arg1 runEnd:(int *)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)checkForBookmarkFrom:(id)arg1 runEnd:(int *)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)check:(id)arg1 forFieldMarkerFrom:(id)arg2 runEnd:(int *)arg3 readState:(struct WBParagraphReadState *)arg4;
+ (_Bool)isCPAnnotationRangeEnd:(int)arg1 bookmarkTable:(struct WrdBookmarkTable *)arg2;
+ (void)checkForAnnotationFrom:(id)arg1 runEnd:(int *)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)checkForNoteFrom:(id)arg1 footnote:(_Bool)arg2 runEnd:(int *)arg3 readState:(struct WBParagraphReadState *)arg4;
+ (void)readCharacterRunsFor:(id)arg1 from:(id)arg2 readState:(struct WBParagraphReadState *)arg3;
+ (void)readRunsFor:(id)arg1 from:(id)arg2 textRun:(struct WrdParagraphTextRun *)arg3;

@end

