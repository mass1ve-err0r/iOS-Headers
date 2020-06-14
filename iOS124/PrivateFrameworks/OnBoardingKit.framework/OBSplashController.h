//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <OnBoardingKit/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, OBBuddyPaneHeaderView, OBPrivacyLinkController, UIColor, UIImage, UIScrollView, UIView, _UIBackdropView;

@interface OBSplashController : UIViewController <UIScrollViewDelegate>
{
    OBBuddyPaneHeaderView *_headerView;
    UIView *_trayBackdropContainer;
    _UIBackdropView *_lightTrayBackdrop;
    _UIBackdropView *_ultraLightTrayBackdrop;
    NSMutableArray *_buttons;
    UIColor *_tint;
    UIView *_bleedView;
    OBPrivacyLinkController *_privacyLink;
    _Bool _disableIconTint;
    _Bool _scrollingDisabled;
    _Bool _darkMode;
    _Bool _fullWidthContent;
    _Bool _displayPrivacyLinkCaptionText;
    _Bool _usesTwoButtonLayout;
    NSString *_detailText;
    UIView *_contentView;
    long long _contentViewPosition;
    UIView *_buttonTray;
    UIScrollView *_scrollView;
    NSArray *_onBoardingBundleIdentifiers;
    long long _privacyLinkPosition;
    UIColor *_bleedColor;
    struct UIEdgeInsets _additionalInsets;
}

@property(nonatomic) _Bool usesTwoButtonLayout; // @synthesize usesTwoButtonLayout=_usesTwoButtonLayout;
@property(retain, nonatomic) UIColor *bleedColor; // @synthesize bleedColor=_bleedColor;
@property(nonatomic) long long privacyLinkPosition; // @synthesize privacyLinkPosition=_privacyLinkPosition;
@property(nonatomic) _Bool displayPrivacyLinkCaptionText; // @synthesize displayPrivacyLinkCaptionText=_displayPrivacyLinkCaptionText;
@property(copy, nonatomic) NSArray *onBoardingBundleIdentifiers; // @synthesize onBoardingBundleIdentifiers=_onBoardingBundleIdentifiers;
@property(nonatomic) _Bool fullWidthContent; // @synthesize fullWidthContent=_fullWidthContent;
@property(nonatomic, getter=isDarkMode) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic, getter=isScrollingDisabled) _Bool scrollingDisabled; // @synthesize scrollingDisabled=_scrollingDisabled;
@property(nonatomic) _Bool disableIconTint; // @synthesize disableIconTint=_disableIconTint;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct UIEdgeInsets additionalInsets; // @synthesize additionalInsets=_additionalInsets;
@property(readonly, nonatomic) UIView *buttonTray; // @synthesize buttonTray=_buttonTray;
@property(nonatomic) long long contentViewPosition; // @synthesize contentViewPosition=_contentViewPosition;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_updateTrayVisibility;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateBleedColor;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)contentScrollView;
- (void)loadView;
- (void)setButtonsEnabled:(_Bool)arg1;
- (id)_createButtonWithTitle:(id)arg1 style:(long long)arg2;
- (void)_updateButtonFonts;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) OBBuddyPaneHeaderView *headerView;
@property(copy, nonatomic) NSString *onBoardingBundleIdentifier;
- (void)setLinkText:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forButtonAtIndex:(unsigned long long)arg2 action:(CDUnknownBlockType)arg3;
- (void)removeAllButtons;
- (void)addButtonWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (void)setTitle:(id)arg1;
@property(retain, nonatomic) NSString *iconAccessibilityLabel;
@property(nonatomic) struct CGSize iconSize;
@property(retain, nonatomic) UIImage *icon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

