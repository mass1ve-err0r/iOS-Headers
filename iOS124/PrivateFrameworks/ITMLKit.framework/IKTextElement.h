//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, NSArray, NSAttributedString, NSMutableArray, UIColor;

@interface IKTextElement : IKViewElement
{
    IKTextParser *_textParser;
    NSMutableArray *_textBadges;
    NSMutableArray *_textBadgeElements;
    NSMutableArray *_textSpanElements;
    unsigned long long _textStyle;
}

+ (_Bool)shouldParseChildDOMElements;
@property(readonly, nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
- (void).cxx_destruct;
- (unsigned long long)_styleForTagName:(id)arg1;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 defaultAttributes:(id *)arg4;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 defaultAttributes:(id *)arg2;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1;
- (id)attributedStringWithFont:(id)arg1;
- (void)appDocumentDidMarkStylesDirty;
- (id)accessibilityText;
@property(readonly, retain, nonatomic) NSAttributedString *text;
@property(readonly, nonatomic) NSArray *badges;
@property(readonly, nonatomic) unsigned long long alignment;
@property(readonly, nonatomic) long long maxLines;
@property(readonly, nonatomic) UIColor *color;
- (id)debugDescription;
- (id)initWithOriginalElement:(id)arg1;
- (id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

