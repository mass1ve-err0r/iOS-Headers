/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate, _UICursorInteractionDelegate> {
    UIView * _alternateSelectedStateBackgroundView;
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    CCUICAPackageDescription * _glyphPackageDescription;
    CCUICAPackageView * _glyphPackageView;
    NSString * _glyphState;
    UIColor * _highlightColor;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIView * _normalStateBackgroundView;
    UIImageView * _selectedGlyphView;
    UIView * _selectedStateBackgroundView;
    bool  _useAlternateBackground;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic, retain) UIView *alternateSelectedStateBackgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) UIImageView *glyphImageView;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic, retain) CCUICAPackageView *glyphPackageView;
@property (nonatomic, copy) NSString *glyphState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) UIView *normalStateBackgroundView;
@property (nonatomic, retain) UIImageView *selectedGlyphView;
@property (nonatomic, retain) UIView *selectedStateBackgroundView;
@property (readonly) Class superclass;
@property (nonatomic) bool useAlternateBackground;

- (void).cxx_destruct;
- (double)_cornerRadius;
- (void)_deactivateReachability:(id)arg1;
- (void)_primaryActionPerformed:(id)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_updateForStateChange;
- (void)_updateVisualStylingOfGlyphView:(id)arg1;
- (id)alternateSelectedStateBackgroundView;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint { double x1; double x2; })arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)dealloc;
- (void)didMoveToWindow;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)glyphImage;
- (id)glyphImageView;
- (id)glyphPackageDescription;
- (id)glyphPackageView;
- (id)glyphState;
- (id)highlightColor;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2;
- (id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 useLightStyle:(bool)arg3;
- (id)initWithHighlightColor:(id)arg1 useLightStyle:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)normalStateBackgroundView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)selectedGlyphView;
- (id)selectedStateBackgroundView;
- (void)setAlternateSelectedStateBackgroundView:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphImageView:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphPackageView:(id)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setNormalStateBackgroundView:(id)arg1;
- (void)setSelectedGlyphView:(id)arg1;
- (void)setSelectedStateBackgroundView:(id)arg1;
- (void)setUseAlternateBackground:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)useAlternateBackground;

@end