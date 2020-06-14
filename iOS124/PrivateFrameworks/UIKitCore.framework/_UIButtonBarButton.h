//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/UISpringLoadedInteractionSupporting-Protocol.h>

@class NSLayoutConstraint, NSString, _UIButtonBarButtonVisualProvider;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButton : UIControl <UISpringLoadedInteractionSupporting>
{
    _UIButtonBarButtonVisualProvider *_visualProvider;
    NSLayoutConstraint *_widthMinimizingConstraint;
    NSLayoutConstraint *_heightMinimizingConstraint;
    struct CGRect _hitRect;
    _Bool _backButton;
}

@property(readonly, nonatomic, getter=isBackButton) _Bool backButton; // @synthesize backButton=_backButton;
@property(readonly, copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_accessibilitySettingsChanged:(id)arg1;
- (_Bool)_accessibilityShouldActivateOnHUDLift;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic, getter=_buttonBarHitRect, setter=_setButtonBarHitRect:) struct CGRect buttonBarHitRect;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded;
- (void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(_Bool)arg3;
@property(readonly, nonatomic) NSLayoutConstraint *heightMinimizingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *widthMinimizingConstraint;
- (void)reset;
- (void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;
- (void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithVisualProvider:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

