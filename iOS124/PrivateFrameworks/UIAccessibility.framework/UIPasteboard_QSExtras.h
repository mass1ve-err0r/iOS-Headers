//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIAccessibility/__UIPasteboard_QSExtras_super.h>

@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super
{
}

+ (id)_accessibilityQuickSpeakPasteboard;
+ (void)_accessibilitySetUseQuickSpeakPasteBoard:(_Bool)arg1;
+ (_Bool)_accessibilityUseQuickSpeakPasteBoard;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (id)generalPasteboard;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
- (id)colors;
- (id)color;
- (id)images;
- (id)image;
- (id)URLs;
- (id)URL;
- (id)strings;
- (id)string;
- (void)addItems:(id)arg1;
- (void)setItems:(id)arg1;
- (id)items;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (_Bool)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (void)setStrings:(id)arg1;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (long long)numberOfItems;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (_Bool)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
- (long long)changeCount;

@end

