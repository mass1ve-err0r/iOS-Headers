//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIContentRatingArtworkLoaderObserver-Protocol.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>

@class NSString, SKUIBadgeLabel, SKUIClientContext, SKUIColorScheme, SKUIContentRatingArtworkResourceLoader, SKUIItemContentRating, SKUIItemOffer, SKUIItemOfferButton, SKUIItemState, SKUIProductPageHeaderLabel, UIButton, UIControl, UIImage, UIImageView, UILabel;

@interface SKUIProductPageHeaderView : UIView <SKUIItemOfferButtonDelegate, SKUIContentRatingArtworkLoaderObserver>
{
    UILabel *_ageBandLabel;
    UIButton *_artistButton;
    SKUIBadgeLabel *_editorialBadgeLabel;
    SKUIClientContext *_clientContext;
    SKUIItemContentRating *_contentRating;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIColorScheme *_colorScheme;
    double _headerImageHeight;
    UIImageView *_headerImageView;
    UIImageView *_iconImageView;
    UILabel *_inAppPurchasesLabel;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    UILabel *_itemOfferExplanationLabel;
    UILabel *_itemOfferExplanationTitleLabel;
    SKUIItemState *_itemState;
    _Bool _needsLayoutAfterButtonAnimation;
    long long _numberOfUserRatings;
    _Bool _restricted;
    SKUIItemContentRating *_secondaryContentRating;
    UIButton *_shareButton;
    SKUIProductPageHeaderLabel *_titleLabel;
    double _userRating;
    UILabel *_userRatingLabel;
    UIImageView *_userRatingStarsView;
}

@property(readonly, nonatomic) UIControl *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) double userRating; // @synthesize userRating=_userRating;
@property(retain, nonatomic) SKUIItemContentRating *secondaryContentRating; // @synthesize secondaryContentRating=_secondaryContentRating;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(copy, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;
@property(readonly, nonatomic) SKUIItemOfferButton *itemOfferButton; // @synthesize itemOfferButton=_itemOfferButton;
@property(retain, nonatomic) SKUIItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;
@property(nonatomic) double headerImageHeight; // @synthesize headerImageHeight=_headerImageHeight;
@property(retain, nonatomic) SKUIContentRatingArtworkResourceLoader *contentRatingArtworkLoader; // @synthesize contentRatingArtworkLoader=_contentRatingArtworkLoader;
@property(retain, nonatomic) SKUIItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) UIControl *artistButton; // @synthesize artistButton=_artistButton;
- (void).cxx_destruct;
- (void)_getBottomLayoutProperties:(struct **)arg1 origins:(double **)arg2 height:(double *)arg3 forWidth:(double)arg4;
- (void)_getTopLayoutProperties:(struct **)arg1 origins:(double **)arg2 height:(double *)arg3 forWidth:(double)arg4;
- (void)_reloadItemOfferButton:(_Bool)arg1;
- (void)_finishButtonAnimation;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)sizeToFit;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *itemOfferExplanationTitle;
@property(copy, nonatomic) NSString *itemOfferExplanationText;
@property(copy, nonatomic) NSString *inAppPurchasesString;
@property(retain, nonatomic) UIImage *iconImage;
@property(retain, nonatomic) UIImage *headerImage;
@property(copy, nonatomic) NSString *editorialBadge;
@property(copy, nonatomic) NSString *artistName;
@property(copy, nonatomic) NSString *ageBandString;
- (id)contentRatingName;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

