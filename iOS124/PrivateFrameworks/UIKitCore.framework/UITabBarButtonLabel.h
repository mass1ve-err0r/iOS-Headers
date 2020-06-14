//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UILabel.h>

@class UIColor, UITabBarButton, _UITabBarItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UITabBarButtonLabel : UILabel
{
    double _boundsWidth;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    _Bool _isSelected;
    _Bool _isHighlighted;
    _Bool _hasSeenIdiom;
    Class _appearanceGuideClass;
    UIColor *_unselectedTintColor;
    UITabBarButton *_tabBarButton;
}

+ (double)_fontPointSizeForIdiom:(long long)arg1;
@property(nonatomic, getter=_tabBarButton, setter=_setTabBarButton:) __weak UITabBarButton *tabBarButton; // @synthesize tabBarButton=_tabBarButton;
@property(retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor; // @synthesize unselectedTintColor=_unselectedTintColor;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (long long)_idiomForFontGivenIdiom:(long long)arg1;
- (id)_fontForIdiom:(long long)arg1 forTabBarDisplayStyle:(long long)arg2;
- (id)_fontForIdiom:(long long)arg1;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateLabelsVibrancy;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateForFontChangeWithIdiom:(long long)arg1;
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setBadgeColor:(id)arg1;
- (void)_UIAppearance_setBadgeColor:(id)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateTextColorsForState;
- (void)tintColorDidChange;
- (void)sizeToFitBounds:(struct CGRect)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithTabBarDisplayStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldCeilSizeToViewScale;

@end

