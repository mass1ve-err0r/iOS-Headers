//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _TVCarouselCollectionViewLayout : UICollectionViewFlowLayout
{
    NSDictionary *_layoutAttributesByIndexPath;
}

- (void).cxx_destruct;
- (long long)_expectedNumberOfCells;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end

