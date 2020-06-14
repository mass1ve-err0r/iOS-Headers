//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class NSArray, UIView;
@protocol CRKCardSectionView;

@protocol CRKComposableView <NSObject>
@property(readonly, nonatomic) NSArray *cardSectionSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets cardSectionContentMargins;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(UIView<CRKCardSectionView> *)arg1;
- (void)addCardSectionSubview:(UIView<CRKCardSectionView> *)arg1 withKeyline:(long long)arg2;
@end

