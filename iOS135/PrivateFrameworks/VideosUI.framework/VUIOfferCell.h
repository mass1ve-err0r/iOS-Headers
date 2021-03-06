/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIOfferCell : VUIFocusableCollectionViewCell <VUIRentalExpirationLabelDelegate> {
    VUILabel * _belowCardTextLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _cardSize;
    VUIOfferView * _offerView;
    VUIImageView * _secondChinImageView;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) VUILabel *belowCardTextLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } cardSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIOfferView *offerView;
@property (nonatomic, retain) VUIImageView *secondChinImageView;
@property (readonly) Class superclass;
@property (nonatomic, retain) IKViewElement *viewElement;

+ (id)configureViewWithElement:(id)arg1 existingCell:(id)arg2;

- (void).cxx_destruct;
- (id)belowCardTextLabel;
- (struct CGSize { double x1; double x2; })cardSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)offerView;
- (void)prepareForReuse;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (id)secondChinImageView;
- (void)setBelowCardTextLabel:(id)arg1;
- (void)setCardSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOfferView:(id)arg1;
- (void)setSecondChinImageView:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewElement;

@end
