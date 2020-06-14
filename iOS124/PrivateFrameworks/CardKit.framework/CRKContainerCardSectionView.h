//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CardKit/CRKCardSectionView-Protocol.h>

@class NSString;
@protocol CRKComposableView;

@interface CRKContainerCardSectionView : UIView <CRKCardSectionView>
{
    UIView *_userInputEventInterceptView;
    UIView<CRKComposableView> *_composedSuperview;
    NSString *_cardSectionViewIdentifier;
    UIView *_contentView;
    struct CGSize _contentSize;
}

+ (struct CGSize)sizeThatFitsCardSection:(id)arg1 boundingSize:(struct CGSize)arg2;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *cardSectionViewIdentifier; // @synthesize cardSectionViewIdentifier=_cardSectionViewIdentifier;
@property(nonatomic) __weak UIView<CRKComposableView> *composedSuperview; // @synthesize composedSuperview=_composedSuperview;
- (void).cxx_destruct;
@property(nonatomic) _Bool interceptsTouches;
- (void)removeFromComposedSuperview;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

