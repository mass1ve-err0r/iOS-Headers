//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDSlideChild.h>

@class PDNotesMaster;

__attribute__((visibility("hidden")))
@interface PDNotesSlide : PDSlideChild
{
    PDNotesMaster *mNotesMaster;
}

- (id)description;
- (void)doneWithContent;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;
- (id)masterPlaceholderOfType:(int)arg1;
- (void)setNotesMaster:(id)arg1;
- (id)notesMaster;
- (id)parentSlideBase;
- (void)dealloc;
- (id)init;

@end

