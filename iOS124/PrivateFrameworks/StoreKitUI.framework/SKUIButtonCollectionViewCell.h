//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class IKViewElementStyle, NSString, SKUIButtonViewElement, SKUIBuyButtonDescriptor, UIControl;

@interface SKUIButtonCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>
{
    UIControl *_button;
    id _buttonImageResourceCacheKey;
    SKUIBuyButtonDescriptor *_buyButtonDescriptor;
    SKUIButtonViewElement *_viewElement;
    IKViewElementStyle *_viewElementStyle;
}

+ (id)_attributedStringWithButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (_Bool)_usesBackgroundWithAlpha;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

