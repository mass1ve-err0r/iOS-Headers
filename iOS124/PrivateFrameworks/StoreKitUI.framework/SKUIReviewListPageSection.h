//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

@class NSMutableDictionary, SKUIReviewListPageComponent, SKUIViewElementLayoutContext;

@interface SKUIReviewListPageSection : SKUIStorePageSection
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    NSMutableDictionary *_contextActionsRegistration;
}

@property(copy, nonatomic) NSMutableDictionary *contextActionsRegistration; // @synthesize contextActionsRegistration=_contextActionsRegistration;
- (void).cxx_destruct;
- (void)_requestCellLayout;
- (struct UIEdgeInsets)_contentInsetForReviewIndex:(long long)arg1;
- (id)_contextActionRegistrationKeyWithCell:(id)arg1 indexPath:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (long long)numberOfCells;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)unregisterContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)registerContextActionsForCell:(id)arg1 indexPath:(id)arg2 viewController:(id)arg3;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIReviewListPageComponent *pageComponent; // @dynamic pageComponent;

@end

