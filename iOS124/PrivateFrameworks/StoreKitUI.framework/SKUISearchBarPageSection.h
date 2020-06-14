//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUISearchBarController;

@interface SKUISearchBarPageSection : SKUIStorePageSection
{
    SKUISearchBarController *_searchBarController;
}

- (void).cxx_destruct;
- (id)_searchBarController;
- (void)willAppearInContext:(id)arg1;
- (struct UIEdgeInsets)sectionContentInset;
- (long long)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;

@end

