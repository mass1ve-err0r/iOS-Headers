//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPTOCEntryStyle;

__attribute__((visibility("hidden")))
@interface TSWPTOCMapEntry : NSObject
{
    _Bool _showInTOC;
    TSWPTOCEntryStyle *_tocEntryStyle;
}

@property(nonatomic) _Bool showInTOC; // @synthesize showInTOC=_showInTOC;
@property(retain, nonatomic) TSWPTOCEntryStyle *tocEntryStyle; // @synthesize tocEntryStyle=_tocEntryStyle;
- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)initWithTOCEntryStyle:(id)arg1 showInTOC:(_Bool)arg2;

@end

