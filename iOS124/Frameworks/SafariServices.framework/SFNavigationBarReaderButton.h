//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface SFNavigationBarReaderButton : UIButton
{
    UIImageView *_defaultStateImageView;
    UIImageView *_selectedStateImageView;
    UIImageView *_selectedStateGlyphImageView;
    UIColor *_glyphTintColor;
    _Bool _useStandaloneAppearance;
    _Bool _drawsLightGlyph;
    _Bool _prefersResizableBackground;
    double _resizableBackgroundCornerRadius;
}

+ (struct CGSize)glyphSize;
@property(nonatomic) double resizableBackgroundCornerRadius; // @synthesize resizableBackgroundCornerRadius=_resizableBackgroundCornerRadius;
@property(nonatomic) _Bool prefersResizableBackground; // @synthesize prefersResizableBackground=_prefersResizableBackground;
@property(nonatomic) _Bool drawsLightGlyph; // @synthesize drawsLightGlyph=_drawsLightGlyph;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setGlyphTintColor:(id)arg1;
- (void)_updateImageViews;
- (_Bool)_usesResizableBackground;
@property(readonly, nonatomic) struct CGSize visibleSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 useStandaloneAppearance:(_Bool)arg2 prefersResizableBackground:(_Bool)arg3 resizableBackgroundCornerRadius:(double)arg4;

@end
