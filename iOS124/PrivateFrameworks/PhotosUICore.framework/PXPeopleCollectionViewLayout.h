//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface PXPeopleCollectionViewLayout : UICollectionViewFlowLayout
{
    unsigned long long _firstVisibleCellIndex;
}

@property(nonatomic) unsigned long long firstVisibleCellIndex; // @synthesize firstVisibleCellIndex=_firstVisibleCellIndex;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end

