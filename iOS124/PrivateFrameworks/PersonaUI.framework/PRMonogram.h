//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface PRMonogram : NSObject
{
    NSString *_text;
    unsigned long long _fontIndex;
    UIColor *_color;
}

+ (void)updatePlateOverlayLayer:(id)arg1;
+ (id)plateOverlayLayer;
+ (double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2;
+ (id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2;
+ (unsigned long long)countOfFonts;
+ (id)_fontSpecs;
+ (id)_defaultMonogramColor;
+ (id)monogramColors;
+ (id)plateSelectedActiveTextColor;
+ (id)plateSelectedInactiveColor;
+ (id)plateSelectedActiveColor;
+ (id)plateGradientEndColor;
+ (id)plateGradientStartColor;
+ (id)plateFlatColor;
+ (id)monogramWithData:(id)arg1;
+ (id)monogram;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long fontIndex; // @synthesize fontIndex=_fontIndex;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_renderTextInContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2;
- (id)snapshotWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;
- (id)stringAttributesForDiameter:(double)arg1;
- (void)_takeValuesFromDataRepresentation:(id)arg1;
- (id)dataRepresentation;
- (void)setFontIndexToUnsupportedValue;
- (id)_initWithData:(id)arg1;
- (id)init;
- (id)snapshotWithOptions:(id)arg1;

@end

