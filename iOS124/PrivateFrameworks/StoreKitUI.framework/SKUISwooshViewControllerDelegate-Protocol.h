//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class UIImage, UIViewController;

@protocol SKUISwooshViewControllerDelegate <NSObject>

@optional
- (void)swooshDidSelectSeeAll:(UIViewController *)arg1;
- (void)swoosh:(UIViewController *)arg1 didEndDisplayingCellAtIndex:(long long)arg2;
- (void)swoosh:(UIViewController *)arg1 willDisplayCellAtIndex:(long long)arg2;
- (void)swoosh:(UIViewController *)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swoosh:(UIViewController *)arg1 didDoubleTapCellAtIndex:(long long)arg2;
- (UIImage *)swoosh:(UIViewController *)arg1 videoThumbnailForCellAtIndex:(long long)arg2;
- (UIImage *)swoosh:(UIViewController *)arg1 imageForCellAtIndex:(long long)arg2;
@end

