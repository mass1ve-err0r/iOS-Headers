//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class NSArray, NSLayoutConstraint, NSString, UILabel, UIStatusBarCarPlayDockAppItemButton, UIView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayDockItemView : UIStatusBarItemView
{
    _Bool _showingCallTimer;
    UILabel *_inCallDurationLabel;
    UIStatusBarCarPlayDockAppItemButton *_itemOneButton;
    UIStatusBarCarPlayDockAppItemButton *_itemTwoButton;
    UIStatusBarCarPlayDockAppItemButton *_itemThreeButton;
    NSLayoutConstraint *_inCallLabelSpacingConstraint;
    NSLayoutConstraint *_itemOneTopConstraint;
    NSArray *_currentBundleIdentifiers;
    NSString *_currentActiveBundleIdentifier;
    UIView *_preferredItemViewToFocus;
}

@property(nonatomic, getter=isShowingCallTimer) _Bool showingCallTimer; // @synthesize showingCallTimer=_showingCallTimer;
@property(nonatomic) __weak UIView *preferredItemViewToFocus; // @synthesize preferredItemViewToFocus=_preferredItemViewToFocus;
@property(copy, nonatomic) NSString *currentActiveBundleIdentifier; // @synthesize currentActiveBundleIdentifier=_currentActiveBundleIdentifier;
@property(copy, nonatomic) NSArray *currentBundleIdentifiers; // @synthesize currentBundleIdentifiers=_currentBundleIdentifiers;
@property(retain, nonatomic) NSLayoutConstraint *itemOneTopConstraint; // @synthesize itemOneTopConstraint=_itemOneTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inCallLabelSpacingConstraint; // @synthesize inCallLabelSpacingConstraint=_inCallLabelSpacingConstraint;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemThreeButton; // @synthesize itemThreeButton=_itemThreeButton;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemTwoButton; // @synthesize itemTwoButton=_itemTwoButton;
@property(retain, nonatomic) UIStatusBarCarPlayDockAppItemButton *itemOneButton; // @synthesize itemOneButton=_itemOneButton;
@property(retain, nonatomic) UILabel *inCallDurationLabel; // @synthesize inCallDurationLabel=_inCallDurationLabel;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (unsigned long long)_numberOfEnabledItems;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (void)_updateInCallDurationIfNecessary:(id)arg1;
- (id)_toItemViewForBundleIdentifier:(id)arg1;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (_Bool)animatesDataChange;
- (void)updateForNewStyle:(id)arg1;
- (double)neededSizeForImageSet:(id)arg1;
- (double)_neededSizeWithoutCallTimer;
- (double)_neededSizeWithCallTimer;
- (_Bool)allowsUserInteraction;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

