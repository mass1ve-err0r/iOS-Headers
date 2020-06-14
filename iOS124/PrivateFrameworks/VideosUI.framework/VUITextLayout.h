//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSNumber, NSShadow, NSString, UIColor;

@interface VUITextLayout : NSObject <NSCopying>
{
    _Bool _alwaysFocusable;
    unsigned int _fontTraits;
    int _blendMode;
    long long _textStyle;
    NSString *_maximumContentSizeCategory;
    NSString *_fontFamily;
    long long _fontWeight;
    double _fontSize;
    long long _fontFeature;
    UIColor *_color;
    UIColor *_darkColor;
    UIColor *_highlightOrSelectedColor;
    UIColor *_darkHighlightOrSelectedColor;
    UIColor *_seeMoreTextColor;
    UIColor *_darkSeeMoreTextColor;
    long long _textTransform;
    long long _alignment;
    unsigned long long _numberOfLines;
    unsigned long long _numberOfLinesAXSmall;
    unsigned long long _numberOfLinesAXLarge;
    double _minimumScaleFactor;
    NSShadow *_shadow;
    NSNumber *_letterSpacing;
    long long _lineBreakMode;
    struct UIEdgeInsets _margin;
}

@property(nonatomic) _Bool alwaysFocusable; // @synthesize alwaysFocusable=_alwaysFocusable;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(retain, nonatomic) NSNumber *letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) unsigned long long numberOfLinesAXLarge; // @synthesize numberOfLinesAXLarge=_numberOfLinesAXLarge;
@property(nonatomic) unsigned long long numberOfLinesAXSmall; // @synthesize numberOfLinesAXSmall=_numberOfLinesAXSmall;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long textTransform; // @synthesize textTransform=_textTransform;
@property(retain, nonatomic) UIColor *darkSeeMoreTextColor; // @synthesize darkSeeMoreTextColor=_darkSeeMoreTextColor;
@property(retain, nonatomic) UIColor *seeMoreTextColor; // @synthesize seeMoreTextColor=_seeMoreTextColor;
@property(retain, nonatomic) UIColor *darkHighlightOrSelectedColor; // @synthesize darkHighlightOrSelectedColor=_darkHighlightOrSelectedColor;
@property(retain, nonatomic) UIColor *highlightOrSelectedColor; // @synthesize highlightOrSelectedColor=_highlightOrSelectedColor;
@property(retain, nonatomic) UIColor *darkColor; // @synthesize darkColor=_darkColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) long long fontFeature; // @synthesize fontFeature=_fontFeature;
@property(nonatomic) unsigned int fontTraits; // @synthesize fontTraits=_fontTraits;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) long long fontWeight; // @synthesize fontWeight=_fontWeight;
@property(retain, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(retain, nonatomic) NSString *maximumContentSizeCategory; // @synthesize maximumContentSizeCategory=_maximumContentSizeCategory;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
- (void).cxx_destruct;
- (id)_defaultParagraphStyle;
- (unsigned long long)numberOfLinesForTraitCollection:(id)arg1;
- (id)attributedStringWithAttributedString:(id)arg1 view:(id)arg2;
- (id)attributedStringWithString:(id)arg1 view:(id)arg2;
- (id)attributedStringWithString:(id)arg1;
- (void)setColorWithOpacityType:(long long)arg1;
- (id)defaultAttributesForLabel:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

