//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSArray, NSNumber, NSString, SKUIInfoListViewElement, SKUIViewElementLayoutContext;

@interface SKUIKeyValueInfoListPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate>
{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIInfoListViewElement *_infoList;
    NSNumber *_titleColumnWidth;
    NSArray *_viewElements;
}

- (void).cxx_destruct;
- (void)_requestCellLayout;
- (void)_reloadViewElementProperties;
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (long long)numberOfCells;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

