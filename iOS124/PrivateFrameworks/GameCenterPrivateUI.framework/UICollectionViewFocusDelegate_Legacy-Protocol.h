//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, UICollectionView, UIView;

@protocol UICollectionViewFocusDelegate_Legacy <UICollectionViewDelegate>

@optional
- (NSIndexPath *)indexPathForPreferredFocusedItemForCollectionView:(UICollectionView *)arg1;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldUpdateFocusFromItemAtIndexPath:(NSIndexPath *)arg2 toView:(UIView *)arg3 heading:(unsigned long long)arg4;
- (void)collectionView:(UICollectionView *)arg1 didUnfocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 didFocusItemAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)_collectionView:(UICollectionView *)arg1 canFocusItemAtIndexPath:(NSIndexPath *)arg2;
@end

