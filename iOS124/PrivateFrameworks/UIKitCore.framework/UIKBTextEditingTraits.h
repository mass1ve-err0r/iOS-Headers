//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIKBTextEditingTraits : NSObject
{
    _Bool _canToggleBoldface;
    _Bool _canToggleItalics;
    _Bool _canToggleUnderline;
    _Bool _supportStyling;
    _Bool _canCut;
    _Bool _canCopy;
    _Bool _canPaste;
    _Bool _canMoveCursorLeft;
    _Bool _canMoveCursorRight;
    _Bool _isBold;
    _Bool _isItalicized;
    _Bool _isUnderlined;
}

+ (id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool isUnderlined; // @synthesize isUnderlined=_isUnderlined;
@property(readonly, nonatomic) _Bool isItalicized; // @synthesize isItalicized=_isItalicized;
@property(readonly, nonatomic) _Bool isBold; // @synthesize isBold=_isBold;
@property(readonly, nonatomic) _Bool canMoveCursorRight; // @synthesize canMoveCursorRight=_canMoveCursorRight;
@property(readonly, nonatomic) _Bool canMoveCursorLeft; // @synthesize canMoveCursorLeft=_canMoveCursorLeft;
@property(readonly, nonatomic) _Bool canPaste; // @synthesize canPaste=_canPaste;
@property(readonly, nonatomic) _Bool canCopy; // @synthesize canCopy=_canCopy;
@property(nonatomic) _Bool canCut; // @synthesize canCut=_canCut;
@property(readonly, nonatomic) _Bool supportStyling; // @synthesize supportStyling=_supportStyling;
@property(readonly, nonatomic) _Bool canToggleUnderline; // @synthesize canToggleUnderline=_canToggleUnderline;
@property(readonly, nonatomic) _Bool canToggleItalics; // @synthesize canToggleItalics=_canToggleItalics;
@property(readonly, nonatomic) _Bool canToggleBoldface; // @synthesize canToggleBoldface=_canToggleBoldface;
- (id)initWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;

@end

