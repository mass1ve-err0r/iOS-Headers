/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSSecondaryManeuverView : CPSManeuverView {
    double  _generatedHeight;
    double  _generatedWidth;
    CPSAbridgableLabel * _instructionLabel;
    UIImageView * _symbolView;
}

@property (nonatomic) double generatedHeight;
@property (nonatomic) double generatedWidth;
@property (nonatomic, retain) CPSAbridgableLabel *instructionLabel;
@property (nonatomic, retain) UIImageView *symbolView;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)generateLayoutConfigurationsForSizeIfNecessary:(struct CGSize { double x1; double x2; })arg1 force:(bool)arg2;
- (double)generatedHeight;
- (double)generatedWidth;
- (double)horizontalInset;
- (id)initWithManeuver:(id)arg1;
- (id)instructionLabel;
- (double)intrinsicHeightForWidth:(double)arg1;
- (void)setGeneratedHeight:(double)arg1;
- (void)setGeneratedWidth:(double)arg1;
- (void)setInstructionLabel:(id)arg1;
- (void)setSymbolView:(id)arg1;
- (void)setUsesDefaultGuidanceBackgroundColor:(bool)arg1;
- (id)symbolView;
- (void)traitCollectionDidChange:(id)arg1;

@end
