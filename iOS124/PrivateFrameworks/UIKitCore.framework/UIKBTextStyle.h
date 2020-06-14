//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBTextStyle : NSObject <NSCopying>
{
    _Bool _ignoreTextMarginOnKey;
    int _anchorCorner;
    NSString *_fontName;
    double _fontSize;
    double _imageScale;
    double _minFontSize;
    double _kerning;
    double _textOpacity;
    NSString *_textColor;
    NSString *_etchColor;
    long long _alignment;
    double _pathWeight;
    double _fontWeight;
    long long _selector;
    struct CGPoint _textOffset;
    struct CGPoint _etchOffset;
}

+ (id)styleWithTextColor:(id)arg1;
+ (id)styleWithFontName:(id)arg1 withFontSize:(double)arg2;
@property(nonatomic) _Bool ignoreTextMarginOnKey; // @synthesize ignoreTextMarginOnKey=_ignoreTextMarginOnKey;
@property(nonatomic) long long selector; // @synthesize selector=_selector;
@property(nonatomic) int anchorCorner; // @synthesize anchorCorner=_anchorCorner;
@property(nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double pathWeight; // @synthesize pathWeight=_pathWeight;
@property(nonatomic) struct CGPoint etchOffset; // @synthesize etchOffset=_etchOffset;
@property(nonatomic) struct CGPoint textOffset; // @synthesize textOffset=_textOffset;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSString *etchColor; // @synthesize etchColor=_etchColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double textOpacity; // @synthesize textOpacity=_textOpacity;
@property(nonatomic) double kerning; // @synthesize kerning=_kerning;
@property(nonatomic) double minFontSize; // @synthesize minFontSize=_minFontSize;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)overlayWithStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

