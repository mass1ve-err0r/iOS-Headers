//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSIndexPath, UICollectionView;

@protocol PKDashboardViewControllerDelegateFlowLayout <UICollectionViewDelegateFlowLayout>

@optional
- (_Bool)itemIsIndependentInCollectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (_Bool)itemIsStackableInCollectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2;
@end

