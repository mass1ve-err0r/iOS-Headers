//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class UICollectionViewLayout;

@protocol PUPhotosGridTransitioningLayoutBasic <NSObject>
@property(readonly, nonatomic) _Bool transitionIsAppearing;
@property(nonatomic) _Bool transitionZoomingOut;
@property(readonly, nonatomic) struct CGPoint transitionEndContentOffset;
@property(nonatomic) struct CGPoint transitionStartContentOffset;
@property(readonly, nonatomic) UICollectionViewLayout *transitionLayout;
@end

