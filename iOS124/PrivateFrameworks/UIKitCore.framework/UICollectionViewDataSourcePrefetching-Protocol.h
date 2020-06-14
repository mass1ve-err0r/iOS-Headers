//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UICollectionView;

@protocol UICollectionViewDataSourcePrefetching <NSObject>
- (void)collectionView:(UICollectionView *)arg1 prefetchItemsAtIndexPaths:(NSArray *)arg2;

@optional
- (void)collectionView:(UICollectionView *)arg1 cancelPrefetchingForItemsAtIndexPaths:(NSArray *)arg2;
@end

