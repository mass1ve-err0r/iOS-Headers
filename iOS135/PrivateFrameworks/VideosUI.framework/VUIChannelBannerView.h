/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIChannelBannerView : UIView {
    VUIAppleTVChannelLogoView * _appleTVChannelLogoView;
    UIView * _bgColorView;
    VUIFocusableTextView * _descriptionTextView;
    VUILabel * _disclaimerTextLabel;
    VUIChannelBannerLayout * _layout;
    VUISeparatorView * _separatorView;
    VUIButton * _subscribeButton;
    NSArray * _textLabels;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) VUIAppleTVChannelLogoView *appleTVChannelLogoView;
@property (nonatomic, retain) UIView *bgColorView;
@property (nonatomic, retain) VUIFocusableTextView *descriptionTextView;
@property (nonatomic, retain) VUILabel *disclaimerTextLabel;
@property (nonatomic, retain) VUIChannelBannerLayout *layout;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, retain) VUIButton *subscribeButton;
@property (nonatomic, retain) NSArray *textLabels;
@property (nonatomic, readonly) double topThreshold;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)_layoutLabels:(id)arg1 withOrigin:(struct CGPoint { double x1; double x2; })arg2 maxWidth:(double)arg3;
- (struct CGSize { double x1; double x2; })_layoutSubviewsWithSize:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (id)appleTVChannelLogoView;
- (id)bgColorView;
- (id)descriptionTextView;
- (id)disclaimerTextLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setAppleTVChannelLogoView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBgColorView:(id)arg1;
- (void)setDescriptionTextView:(id)arg1;
- (void)setDisclaimerTextLabel:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubscribeButton:(id)arg1;
- (void)setTextLabels:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subscribeButton;
- (id)textLabels;
- (double)topThreshold;
- (id)viewElement;

@end