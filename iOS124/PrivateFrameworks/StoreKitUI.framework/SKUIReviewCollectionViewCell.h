//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSString, SKUIResponseView, SKUITextBoxView;

@interface SKUIReviewCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>
{
    CDUnknownBlockType _descriptionTapAction;
    CDUnknownBlockType _responseDescriptionTapAction;
    SKUITextBoxView *_descriptionView;
    SKUIResponseView *_responseView;
}

+ (id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(retain, nonatomic) SKUIResponseView *responseView; // @synthesize responseView=_responseView;
@property(retain, nonatomic) SKUITextBoxView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(copy, nonatomic) CDUnknownBlockType responseDescriptionTapAction; // @synthesize responseDescriptionTapAction=_responseDescriptionTapAction;
@property(copy, nonatomic) CDUnknownBlockType descriptionTapAction; // @synthesize descriptionTapAction=_descriptionTapAction;
- (void).cxx_destruct;
- (void)_resetTapGestures;
- (void)contentViewTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

