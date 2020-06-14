//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCloudQuotaUI/ICQPageView.h>

#import <iCloudQuotaUI/UIScrollViewDelegate-Protocol.h>
#import <iCloudQuotaUI/UITextViewDelegate-Protocol.h>

@class ICQLink, NSArray, NSString, UIActivityIndicatorView, UIButton, UIColor, UIFont, UIImageView, UILabel, UILayoutGuide, UIScrollView, UIView, _ICQTextView, _ICQUpgradeOfferPageSpecification, _UIBackdropView;
@protocol ICQPageDelegate;

@interface ICQUpgradeOfferView : ICQPageView <UITextViewDelegate, UIScrollViewDelegate>
{
    _ICQUpgradeOfferPageSpecification *_upgradeOfferPageSpecification;
    long long _upgradeMode;
    UIColor *_buttonTintColor;
    id <ICQPageDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    _ICQTextView *_messageView;
    _ICQTextView *_fineprintView;
    UIButton *_purchaseButton;
    UIButton *_purchase2Button;
    UIButton *_bottomButton;
    UIActivityIndicatorView *_spinner;
    ICQLink *_purchaseLink;
    ICQLink *_purchase2Link;
    ICQLink *_bottomLink;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_headerView;
    UIView *_footerView;
    UIView *_trayView;
    _UIBackdropView *_lightTrayBackdrop;
    _UIBackdropView *_ultraLightTrayBackdrop;
    UILayoutGuide *_scrollVisibleLayoutGuide;
    UILayoutGuide *_aboveSpinnerLayoutGuide;
    UILayoutGuide *_belowSpinnerLayoutGuide;
    NSArray *_activeConstraints;
}

@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(readonly, nonatomic) UILayoutGuide *belowSpinnerLayoutGuide; // @synthesize belowSpinnerLayoutGuide=_belowSpinnerLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *aboveSpinnerLayoutGuide; // @synthesize aboveSpinnerLayoutGuide=_aboveSpinnerLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *scrollVisibleLayoutGuide; // @synthesize scrollVisibleLayoutGuide=_scrollVisibleLayoutGuide;
@property(readonly, nonatomic) _UIBackdropView *ultraLightTrayBackdrop; // @synthesize ultraLightTrayBackdrop=_ultraLightTrayBackdrop;
@property(readonly, nonatomic) _UIBackdropView *lightTrayBackdrop; // @synthesize lightTrayBackdrop=_lightTrayBackdrop;
@property(readonly, nonatomic) UIView *trayView; // @synthesize trayView=_trayView;
@property(readonly, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) ICQLink *bottomLink; // @synthesize bottomLink=_bottomLink;
@property(readonly, nonatomic) ICQLink *purchase2Link; // @synthesize purchase2Link=_purchase2Link;
@property(readonly, nonatomic) ICQLink *purchaseLink; // @synthesize purchaseLink=_purchaseLink;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UIButton *purchase2Button; // @synthesize purchase2Button=_purchase2Button;
@property(retain, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) _ICQTextView *fineprintView; // @synthesize fineprintView=_fineprintView;
@property(retain, nonatomic) _ICQTextView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <ICQPageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long upgradeMode; // @synthesize upgradeMode=_upgradeMode;
@property(copy, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)_updateTrayVisibility;
- (void)scrollViewDidScroll:(id)arg1;
- (void)flashScrollIndicatorsIfNeeded;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)_constraintsForView:(id)arg1 equalToView:(id)arg2;
- (id)horizontalConstraintsForView:(id)arg1 margin:(double)arg2;
@property(retain, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;
- (id)_imageForBundleIdentifier:(id)arg1;
- (id)_imageForGenericCloud;
- (id)fineprintAttributes;
- (id)fineprintParagraphStyle;
- (id)messageAttributes;
- (id)messageParagraphStyle;
- (void)bottomButtonTapped:(id)arg1;
- (void)purchase2ButtonTapped:(id)arg1;
- (void)purchaseButtonTapped:(id)arg1;
- (void)_setButtonTintColor:(id)arg1;
- (void)_setLinkTextColor:(id)arg1;
- (void)_setButton:(id)arg1 backgroundColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_makeLinkButton;
- (id)_makePurchaseButton;
- (id)_buttons;
- (double)_marginForButton:(id)arg1;
- (double)_spacingFromUpperView:(id)arg1 toLowerView:(id)arg2;
- (id)_anchorForLowerView:(id)arg1;
- (id)_anchorForUpperView:(id)arg1;
- (long long)_styleOfView:(id)arg1;
@property(readonly, nonatomic) UIColor *fineprintColor;
- (id)defaultButtonColor;
@property(readonly, nonatomic) UIFont *fineprintFont;
@property(readonly, nonatomic) UIFont *linkButtonFont;
@property(readonly, nonatomic) UIFont *purchaseButtonFont;
@property(readonly, nonatomic) UIFont *messageFont;
@property(readonly, nonatomic) UIFont *titleFont;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

