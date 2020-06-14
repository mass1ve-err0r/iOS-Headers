//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIKeyboardEmojiCategoryUpdateDelegate-Protocol.h>

@class NSString, UIKeyboardEmojiCategory, UIKeyboardEmojiKeyView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiKeyDisplayController : NSObject <UIKeyboardEmojiCategoryUpdateDelegate>
{
    UIKeyboardEmojiKeyView *_inputView;
    UIKeyboardEmojiKeyView *_categoryView;
    UIKeyboardEmojiCategory *_lastViewedCategory;
}

+ (void)writeEmojiDefaultsAndReleaseActiveInputView;
+ (Class)classForCategoryControl;
+ (Class)classForInputView;
@property(retain, nonatomic) UIKeyboardEmojiKeyView *categoryView; // @synthesize categoryView=_categoryView;
@property(retain, nonatomic) UIKeyboardEmojiKeyView *inputView; // @synthesize inputView=_inputView;
- (long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1;
@property UIKeyboardEmojiCategory *lastViewedCategory;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;
- (_Bool)hasLastUsedVariantForEmojiString:(id)arg1;
- (id)skinToneBaseKeyPreferences;
- (id)emojiWithoutDuplicateRecents:(id)arg1;
- (id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long *)arg2;
- (id)recents;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (void)emojiUsed:(id)arg1;
- (_Bool)userHasSelectedSkinToneEmoji;
- (long long)reloadCategoryForOffsetPercentage:(double)arg1 withSender:(id)arg2;
- (void)reloadForCategory:(long long)arg1 withSender:(id)arg2;
- (void)updateEmojiKeyManagerWithKey:(id)arg1 withKeyView:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

