//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITabBarVisualProvider.h>

#import <UIKitCore/UIScrollViewDelegate-Protocol.h>

@class CABackdropLayer, CAGradientLayer, NSString, UIMotionEffect, UIScrollView, UIView, _UIBarBackground;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderTVOS : _UITabBarVisualProvider <UIScrollViewDelegate>
{
    _UIBarBackground *_backgroundView;
    UIView *_customBackgroundView;
    UIScrollView *_itemsScrollView;
    UIView *_floatingBackgroundContainerView;
    _UIBarBackground *_floatingBackgroundView;
    UIView *_floatingItemsScrollContainerView;
    CAGradientLayer *_scrollViewMask;
    CABackdropLayer *_maskBackdropLayer;
    UIView *_selectionPlatterView;
    UIView *_floatingLabelSnapshotView;
    UIView *_labelMaskView;
    UIMotionEffect *_floatingPlatterMotionEffect;
}

- (void).cxx_destruct;
- (struct CGRect)_getRectForPlatterForView:(id)arg1 withFocus:(_Bool)arg2 finalSize:(_Bool)arg3 clippedToView:(id)arg4;
- (struct CGRect)_getRectForPlatterForView:(id)arg1 withFocus:(_Bool)arg2 finalSize:(_Bool)arg3;
- (struct CGRect)_getRectForPlatterForItem:(id)arg1 withFocus:(_Bool)arg2 finalSize:(_Bool)arg3 clippedToView:(id)arg4;
- (struct CGRect)_getRectForPlatterForItem:(id)arg1 withFocus:(_Bool)arg2 finalSize:(_Bool)arg3;
- (void)_updatePlatterRectWithSelectedItem:(id)arg1;
- (struct CGRect)_getFadeFrameRight:(_Bool)arg1;
- (void)_updateScrollContainerMaskIfNeeded;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_updateFloatingScrollViewContentOffsetWithSelectedView:(id)arg1 animated:(_Bool)arg2;
- (void)_updateFloatingPlatterMotionEffectWithContext:(id)arg1;
- (id)_makeFloatingLabelSnapshotWith:(id)arg1;
- (long long)_compositingMode;
- (void)_updateColors;
- (void)_updateFloatingPlatterViewWithFocusContext:(id)arg1 withFocusAnimationCoordinator:(id)arg2;
- (void)_updateFloatingPlatterView;
- (void)_layoutFloatingBackgroundView;
- (void)_layoutFloatingTabBarItems;
- (void)_createFloatingBackgroundView;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (void)_shim_layoutItemsOnly;
- (void)_shim_setBackdropGroupName:(id)arg1;
- (id)_shim_backdropGroupName;
- (void)_shim_updateBackdropView;
- (void)_shim_updateFocusHighlightVisibility;
- (id)_shim_shadowView;
- (id)_shim_accessoryView;
- (void)_shim_setAccessoryView:(id)arg1;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusedView;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tabBarSizeChanged:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateBackground;
- (void)_configureItems:(id)arg1;
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (id)createViewForTabBarItem:(id)arg1;
- (void)changeLayout;
- (void)changeAppearance;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(_Bool)arg4;
- (void)teardown;
- (void)prepare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

