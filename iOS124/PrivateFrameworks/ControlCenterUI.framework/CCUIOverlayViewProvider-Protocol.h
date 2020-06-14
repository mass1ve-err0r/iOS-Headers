//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIHeaderPocketView, CCUIModuleCollectionView, CCUIStatusLabelViewController, MTMaterialView, UIScrollView, UIStatusBar, UIView;

@protocol CCUIOverlayViewProvider <NSObject>
@property(readonly, nonatomic) UIStatusBar *overlayLeadingStatusBar;
@property(readonly, nonatomic) CCUIHeaderPocketView *overlayHeaderView;
@property(readonly, nonatomic) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property(readonly, nonatomic) CCUIModuleCollectionView *overlayModuleCollectionView;
@property(readonly, nonatomic) UIView *overlayContainerView;
@property(readonly, nonatomic) UIScrollView *overlayScrollView;
@property(readonly, nonatomic) MTMaterialView *overlayBackgroundView;
- (void)setOverlayStatusBarHidden:(_Bool)arg1;
@end

