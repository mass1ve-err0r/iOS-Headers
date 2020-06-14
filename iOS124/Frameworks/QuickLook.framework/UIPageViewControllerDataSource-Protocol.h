//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class UIPageViewController, UIViewController;

@protocol UIPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(UIPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(UIPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;

@optional
- (long long)presentationIndexForPageViewController:(UIPageViewController *)arg1;
- (long long)presentationCountForPageViewController:(UIPageViewController *)arg1;
@end

