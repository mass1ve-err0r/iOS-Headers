/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaletteView : UIView <PKPaletteAdditionalOptionsViewDelegate, PKPaletteColorPickerViewDelegate, PKPaletteHostViewDelegate, PKPalettePopoverDismissing, PKPalettePopoverPresenting, PKPalettePopoverUpdating, PKPaletteToolPickerViewDelegate, PKPaletteToolPreviewDelegate, PKPaletteUndoRedoViewDelegate, PKPaletteViewSizeScaling, PKPaletteViewStateObservable, UIPencilInteractionDelegate> {
    <PKPaletteViewAnnotationDelegate> * _annotationDelegate;
    unsigned long long  _autoHideCorner;
    bool  _autoHideEnabled;
    MTMaterialView * _backgroundMaterialView;
    MTMaterialView * _backgroundView;
    UIView * _bottomThinSeparator;
    UIView * _clippingView;
    long long  _colorUserInterfaceStyle;
    PKPaletteContainerView * _containerView;
    PKPaletteContentView * _contentView;
    <PKPaletteViewDelegate> * _delegate;
    <PKPaletteViewInternalDelegate> * _internalDelegate;
    bool  _isEditingOpacity;
    unsigned long long  _lastEdgeLocation;
    unsigned long long  _lastPaletteEdgePositionWhileDragging;
    UIView * _opacityEditingView;
    NSLayoutConstraint * _paletteContainerCenterXConstraint;
    NSLayoutConstraint * _paletteContainerCenterYConstraint;
    NSLayoutConstraint * _paletteContainerCompactBottomConstraint;
    NSLayoutConstraint * _paletteContainerCompactLeftConstraint;
    NSLayoutConstraint * _paletteContainerCompactRightConstraint;
    NSLayoutConstraint * _paletteContainerCompactTopConstraint;
    NSLayoutConstraint * _paletteContainerHeightConstraint;
    NSLayoutConstraint * _paletteContainerWidthConstraint;
    bool  _paletteHasLayoutSubviews;
    bool  _paletteIsCompactSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _palettePopoverLayoutSceneMargins;
    long long  _palettePosition;
    UIPencilInteraction * _pencilInteraction;
    UIViewController * _popoverPresentingController;
    UIViewController * _presentationController;
    double  _scalingFactor;
    bool  _settingSelectedColor;
    bool  _supportsOpacityEditing;
    PKPaletteToolPreview * _toolPreview;
    NSLayoutConstraint * _toolPreviewCenterXConstraint;
    NSLayoutConstraint * _toolPreviewCenterYConstraint;
    NSLayoutConstraint * _toolPreviewHeightConstraint;
    bool  _toolPreviewMinimized;
    NSLayoutConstraint * _toolPreviewWidthConstraint;
    NSUndoManager * _undoManager;
    PKPaletteUndoRedoView * _undoRedoCompactView;
    bool  _wantsClearBackgroundColorInCompactSize;
    bool  _wantsUndoRedoButtonsInCompactSize;
}

@property (nonatomic) <PKPaletteViewAnnotationDelegate> *annotationDelegate;
@property (getter=isAnnotationSupportEnabled, nonatomic, readonly) bool annotationSupportEnabled;
@property (nonatomic, readonly) unsigned long long autoHideCorner;
@property (getter=isAutoHideEnabled, nonatomic, readonly) bool autoHideEnabled;
@property (getter=isBackgroundMaterialUpdatingPaused, nonatomic) bool backgroundMaterialUpdatingPaused;
@property (nonatomic, retain) MTMaterialView *backgroundMaterialView;
@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (nonatomic, retain) UIView *bottomThinSeparator;
@property (nonatomic, retain) UIView *clippingView;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic, retain) PKPaletteContainerView *containerView;
@property (nonatomic, retain) PKPaletteContentView *contentView;
@property (nonatomic) long long contextEditingMode;
@property (nonatomic, readonly) UIView *contextualEditingView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaletteViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPaletteViewInternalDelegate> *internalDelegate;
@property (nonatomic) bool isEditingOpacity;
@property (nonatomic) bool isRulerActive;
@property (nonatomic) unsigned long long lastEdgeLocation;
@property (nonatomic) unsigned long long lastPaletteEdgePositionWhileDragging;
@property (nonatomic, readonly) UIView *opacityEditingView;
@property (nonatomic, retain) NSLayoutConstraint *paletteContainerCenterXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteContainerCenterYConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteContainerCompactBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteContainerCompactLeftConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteContainerCompactRightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteContainerCompactTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteContainerHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paletteContainerWidthConstraint;
@property (nonatomic) double paletteContentAlpha;
@property (nonatomic) bool paletteHasLayoutSubviews;
@property (nonatomic) bool paletteIsCompactSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } palettePopoverLayoutSceneMargins;
@property (nonatomic) long long palettePosition;
@property (nonatomic, readonly) UIPencilInteraction *pencilInteraction;
@property (nonatomic, retain) UIViewController *popoverPresentingController;
@property (nonatomic) UIViewController *presentationController;
@property (nonatomic) double scalingFactor;
@property (nonatomic, retain) PKInk *selectedToolInk;
@property (getter=isSettingSelectedColor, nonatomic) bool settingSelectedColor;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsOpacityEditing;
@property (nonatomic, retain) PKPaletteToolPreview *toolPreview;
@property (nonatomic, retain) NSLayoutConstraint *toolPreviewCenterXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPreviewCenterYConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPreviewHeightConstraint;
@property (getter=isToolPreviewMinimized, nonatomic) bool toolPreviewMinimized;
@property (nonatomic, retain) NSLayoutConstraint *toolPreviewWidthConstraint;
@property (nonatomic, retain) PKPaletteUndoRedoView *undoRedoCompactView;
@property (nonatomic, readonly) bool useCompactSize;
@property (nonatomic) bool wantsClearBackgroundColorInCompactSize;
@property (nonatomic) bool wantsUndoRedoButtonsInCompactSize;

+ (id)makeBackgroundView;

- (void).cxx_destruct;
- (void)_centerPaletteContainerSubviewToCurrentlySelectedToolForEdge:(unsigned long long)arg1;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (id)_clippingViewBackgroundColor;
- (void)_installBackgroundView;
- (void)_installClippingView;
- (void)_installContentView;
- (void)_installToolPreview;
- (void)_installUndoRedoButtonsViewAtTop;
- (bool)_loadOptions;
- (unsigned long long)_nextAutoHideCorner;
- (void)_notifyPaletteDidChangePosition;
- (struct CGSize { double x1; double x2; })_paletteSizeForEdge:(unsigned long long)arg1;
- (void)_releaseUndoManager;
- (void)_saveOptions;
- (void)_setCornerRadius:(double)arg1;
- (void)_setSelectedColor:(id)arg1;
- (void)_updateColorPickerSelectedColor;
- (void)_updateContainerSizeConstraintsForEdge:(unsigned long long)arg1;
- (void)_updateToolPreview;
- (void)_updateToolPreviewForEdge:(unsigned long long)arg1;
- (void)_updateToolPreviewScalingAnimated:(bool)arg1;
- (void)_updateToolPreviewVisibility;
- (void)_updateUIForAnnotationSupportIfNeeded;
- (void)_willDockPaletteToCorner:(unsigned long long)arg1;
- (void)_willDockPaletteToEdge:(unsigned long long)arg1 prepareForExpansion:(bool)arg2;
- (void)additionalOptionsView:(id)arg1 didToggleAutoHideOption:(bool)arg2;
- (void)additionalOptionsViewDidSelectPlusButton:(id)arg1;
- (id)annotationDelegate;
- (unsigned long long)autoHideCorner;
- (id)backgroundMaterialView;
- (id)backgroundView;
- (id)bottomThinSeparator;
- (id)clippingView;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (bool)colorPickerShouldDisplayColorSelection:(id)arg1;
- (long long)colorUserInterfaceStyle;
- (void)configureForDockedAtCorner;
- (void)configureForDockedAtEdge:(unsigned long long)arg1;
- (id)containerView;
- (id)contentView;
- (long long)contextEditingMode;
- (id)contextualEditingView;
- (void)dealloc;
- (id)delegate;
- (void)didEndAppearanceAnimation;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)arg1;
- (unsigned long long)edgeLocationToDockFromCorner:(unsigned long long)arg1;
- (void)endOpacityEditing;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)hostView:(id)arg1 didDockPaletteToPosition:(long long)arg2;
- (void)hostView:(id)arg1 willDockPaletteToPosition:(long long)arg2 prepareForExpansion:(bool)arg3;
- (id)initWithInternalDelegate:(id)arg1;
- (id)internalDelegate;
- (bool)isAnnotationSupportEnabled;
- (bool)isAutoHideEnabled;
- (bool)isBackgroundMaterialUpdatingPaused;
- (bool)isEditingOpacity;
- (bool)isPalettePresentingPopover;
- (bool)isRulerActive;
- (bool)isSettingSelectedColor;
- (bool)isToolDictionary:(id)arg1 ofTypeIdentifier:(id)arg2;
- (bool)isToolPreviewMinimized;
- (unsigned long long)lastEdgeLocation;
- (unsigned long long)lastPaletteEdgePositionWhileDragging;
- (void)layoutSubviews;
- (id)opacityEditingView;
- (id)paletteContainerCenterXConstraint;
- (id)paletteContainerCenterYConstraint;
- (id)paletteContainerCompactBottomConstraint;
- (id)paletteContainerCompactLeftConstraint;
- (id)paletteContainerCompactRightConstraint;
- (id)paletteContainerCompactTopConstraint;
- (id)paletteContainerHeightConstraint;
- (id)paletteContainerWidthConstraint;
- (double)paletteContentAlpha;
- (bool)paletteHasLayoutSubviews;
- (bool)paletteIsCompactSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })palettePopoverLayoutMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })palettePopoverLayoutSceneMargins;
- (id)palettePopoverPassthroughViews;
- (unsigned long long)palettePopoverPermittedArrowDirections;
- (id)palettePopoverPresentingController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })palettePopoverSourceRect;
- (id)palettePopoverSourceView;
- (long long)palettePosition;
- (id)pencilInteraction;
- (void)pencilInteractionDidTap:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })plusButtonFrame;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)popoverPresentingController;
- (id)presentationController;
- (void)safeAreaInsetsDidChange;
- (void)saveOptionsIfNecessary;
- (double)scalingFactor;
- (id)selectedToolInk;
- (void)setAnnotationDelegate:(id)arg1;
- (void)setBackgroundMaterialUpdatingPaused:(bool)arg1;
- (void)setBackgroundMaterialView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomThinSeparator:(id)arg1;
- (void)setClippingView:(id)arg1;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setContainerView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContextEditingMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setIsEditingOpacity:(bool)arg1;
- (void)setIsRulerActive:(bool)arg1;
- (void)setLastEdgeLocation:(unsigned long long)arg1;
- (void)setLastPaletteEdgePositionWhileDragging:(unsigned long long)arg1;
- (void)setPaletteContainerCenterXConstraint:(id)arg1;
- (void)setPaletteContainerCenterYConstraint:(id)arg1;
- (void)setPaletteContainerCompactBottomConstraint:(id)arg1;
- (void)setPaletteContainerCompactLeftConstraint:(id)arg1;
- (void)setPaletteContainerCompactRightConstraint:(id)arg1;
- (void)setPaletteContainerCompactTopConstraint:(id)arg1;
- (void)setPaletteContainerHeightConstraint:(id)arg1;
- (void)setPaletteContainerWidthConstraint:(id)arg1;
- (void)setPaletteContentAlpha:(double)arg1;
- (void)setPaletteHasLayoutSubviews:(bool)arg1;
- (void)setPaletteIsCompactSize:(bool)arg1;
- (void)setPalettePopoverLayoutSceneMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPalettePosition:(long long)arg1;
- (void)setPopoverPresentingController:(id)arg1;
- (void)setPresentationController:(id)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setSelectedAnnotationType:(long long)arg1;
- (void)setSelectedToolInk:(id)arg1;
- (void)setSettingSelectedColor:(bool)arg1;
- (void)setSupportsOpacityEditing:(bool)arg1;
- (void)setToolPreview:(id)arg1;
- (void)setToolPreviewCenterXConstraint:(id)arg1;
- (void)setToolPreviewCenterYConstraint:(id)arg1;
- (void)setToolPreviewHeightConstraint:(id)arg1;
- (void)setToolPreviewMinimized:(bool)arg1;
- (void)setToolPreviewMinimized:(bool)arg1 animated:(bool)arg2;
- (void)setToolPreviewWidthConstraint:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)setUndoRedoCompactView:(id)arg1;
- (void)setWantsClearBackgroundColorInCompactSize:(bool)arg1;
- (void)setWantsUndoRedoButtonsInCompactSize:(bool)arg1;
- (void)shapesViewController:(id)arg1 didSelectShapeWithType:(long long)arg2;
- (bool)shouldPalettePresentPopover;
- (void)startOpacityEditing;
- (id)stateDictionary;
- (bool)supportsOpacityEditing;
- (void)textOptionsViewController:(id)arg1 didSelectTextWithType:(long long)arg2;
- (void)toolPickerDidChangeSelectedToolInk:(id)arg1;
- (void)toolPickerDidToggleRulerTool:(id)arg1;
- (id)toolPreview;
- (id)toolPreviewCenterXConstraint;
- (id)toolPreviewCenterYConstraint;
- (void)toolPreviewDidChangeToolColor:(id)arg1;
- (id)toolPreviewHeightConstraint;
- (id)toolPreviewView;
- (id)toolPreviewWidthConstraint;
- (id)toolsArray;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoManager;
- (id)undoRedoCompactView;
- (void)undoRedoViewDidTapRedo:(id)arg1;
- (void)undoRedoViewDidTapUndo:(id)arg1;
- (void)updatePalettePopover:(id)arg1;
- (void)updatePopoverUI;
- (void)updateUndoRedo;
- (bool)useCompactSize;
- (bool)wantsClearBackgroundColorInCompactSize;
- (bool)wantsCustomPalettePopoverPresentationSource;
- (bool)wantsUndoRedoButtonsInCompactSize;
- (void)willStartAppearanceAnimation;

@end