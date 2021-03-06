/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFNavigationBarToggleButton : UIButton {
    UIImageView * _defaultStateImageView;
    bool  _drawsLightGlyph;
    UIColor * _glyphTintColor;
    bool  _highlightsBackground;
    UIImage * _image;
    unsigned long long  _inputMode;
    bool  _liftedForCursor;
    double  _resizableBackgroundCornerRadius;
    UIView * _selectedStateFillView;
    UIImageView * _selectedStateImageView;
    SFToggleBackgroundView * _selectedStateMaskView;
    bool  _usesInsetFromBackground;
}

@property (nonatomic) bool drawsLightGlyph;
@property (nonatomic, retain) UIColor *glyphTintColor;
@property (nonatomic) bool highlightsBackground;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double resizableBackgroundCornerRadius;
@property (nonatomic) bool usesInsetFromBackground;

+ (bool)_cursorInteractionEnabled;
+ (id)formatMenuImage;
+ (struct CGSize { double x1; double x2; })glyphSize;
+ (id)readerImage;

- (void).cxx_destruct;
- (bool)_effectiveHighlightsBackground;
- (void)_updateDefaultStateImageView;
- (void)_updateImageViews;
- (void)_updateSelectedStateView;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3;
- (bool)drawsLightGlyph;
- (id)glyphTintColor;
- (bool)highlightsBackground;
- (id)image;
- (id)initWithImage:(id)arg1 forInputMode:(unsigned long long)arg2;
- (void)layoutSubviews;
- (double)resizableBackgroundCornerRadius;
- (void)setDrawsLightGlyph:(bool)arg1;
- (void)setGlyphTintColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightsBackground:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setResizableBackgroundCornerRadius:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUsesInsetFromBackground:(bool)arg1;
- (bool)usesInsetFromBackground;

@end
