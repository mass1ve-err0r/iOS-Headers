//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UISwitchControl-Protocol.h>
#import <UIKitCore/UISwitchVisualElementProvider-Protocol.h>

@class NSString, UIColor, UIImage, UIImpactFeedbackGenerator, UISwitchVisualElement;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding>
{
    _Bool _on;
    _Bool _alwaysShowOnOffLabel;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    UIColor *_thumbTintColor;
    UIImage *_onImage;
    UIImage *_offImage;
    UISwitchVisualElement *_visualElement;
}

+ (id)visualElementForTraitCollection:(id)arg1;
+ (void)setVisualElementProvider:(id)arg1;
@property(nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) _Bool alwaysShowOnOffLabel; // @synthesize alwaysShowOnOffLabel=_alwaysShowOnOffLabel;
@property(retain, nonatomic) UISwitchVisualElement *visualElement; // @synthesize visualElement=_visualElement;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
- (void).cxx_destruct;
@property(retain, nonatomic, getter=_impactFeedbackGenerator, setter=_setImpactFeedbackGenerator:) UIImpactFeedbackGenerator *impactFeedbackGenerator;
- (void)_showingOnOffLabelChanged;
- (_Bool)_shouldShowOnOffLabels;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2 notifyingVisualElement:(_Bool)arg3;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setEnabled:(_Bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1;
- (void)visualElementHadTouchUpInside:(id)arg1;
- (void)visualElement:(id)arg1 transitionedToOn:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(_Bool)arg2;
- (void)_refreshVisualElementForTraitCollection:(id)arg1;
- (void)_refreshVisualElement;
- (_Bool)_shouldAlterCodedFrame;
- (void)_encodeFrameWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (unsigned long long)defaultAccessibilityTraits;
- (_Bool)isAccessibilityElementByDefault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

