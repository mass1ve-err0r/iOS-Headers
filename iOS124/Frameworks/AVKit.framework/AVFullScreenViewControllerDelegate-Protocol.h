//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVFullScreenViewController, UIResponder, UIView;
@protocol UIViewControllerTransitionCoordinator;

@protocol AVFullScreenViewControllerDelegate <NSObject>
- (UIResponder *)keyCommandResponderForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerNeedsAppBasedStatusBarAppearanceUpdate:(AVFullScreenViewController *)arg1;
- (long long)preferredStatusStyleForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (_Bool)prefersStatusBarHiddenForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewController:(AVFullScreenViewController *)arg1 viewWillTransitionToSize:(struct CGSize)arg2 coordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (UIView *)viewForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillEndFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(AVFullScreenViewController *)arg1;
@end

