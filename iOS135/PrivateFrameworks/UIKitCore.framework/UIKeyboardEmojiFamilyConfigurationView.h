/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiFamilyConfigurationView : UIView <UIKBKeyViewContentView> {
    NSString * _baseEmojiString;
    UIKeyboardEmojiWellView * _configuredWellView;
    NSMutableArray * _familyMemberStackViews;
    double  _metachronalRhythmAnimationStartTime;
    UIKeyboardEmojiWellView * _neutralWellView;
    UIStackView * _previewWellStackView;
    UIKBTree * _representedKey;
    NSMutableArray * _selectedVariantIndices;
    UIView * _separatorView;
    NSArray * _skinToneVariantRows;
    bool  _usesDarkStyle;
}

@property (nonatomic, retain) NSString *baseEmojiString;
@property (nonatomic, retain) UIKeyboardEmojiWellView *configuredWellView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *familyMemberStackViews;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIKeyboardEmojiWellView *neutralWellView;
@property (nonatomic, retain) UIStackView *previewWellStackView;
@property (nonatomic, retain) UIKBTree *representedKey;
@property (nonatomic, retain) NSMutableArray *selectedVariantIndices;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) NSArray *skinToneVariantRows;
@property (readonly) Class superclass;
@property (nonatomic) bool usesDarkStyle;

+ (id)_selectionAndSeparatorColorForDarkMode:(bool)arg1;
+ (struct CGSize { double x1; double x2; })preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;

- (void).cxx_destruct;
- (void)_beginFamilyMetachronalRhythmAnimation;
- (void)_colorConfigurationDidChange;
- (void)_configureFamilyMemberWellStackViews;
- (void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg1;
- (id)_currentlySelectedSkinToneConfiguration;
- (bool)_hasCompletelyConfiguredSkinToneConfiguration;
- (void)_setCurrentlySelectedSkinToneConfiguration:(id)arg1;
- (void)_updatePreviewWellForCurrentSelection;
- (void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;
- (id)_wellViewForSection:(long long)arg1 item:(long long)arg2;
- (id)baseEmojiString;
- (id)configuredWellView;
- (id)familyMemberStackViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)neutralWellView;
- (id)previewWellStackView;
- (id)representedKey;
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)selectedVariantIndices;
- (id)separatorView;
- (void)setBaseEmojiString:(id)arg1;
- (void)setConfiguredWellView:(id)arg1;
- (void)setFamilyMemberStackViews:(id)arg1;
- (void)setNeutralWellView:(id)arg1;
- (void)setPreviewWellStackView:(id)arg1;
- (void)setRepresentedKey:(id)arg1;
- (void)setSelectedVariantIndices:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSkinToneVariantRows:(id)arg1;
- (void)setUsesDarkStyle:(bool)arg1;
- (id)skinToneVariantRows;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateRenderConfig:(id)arg1;
- (bool)usesDarkStyle;

@end