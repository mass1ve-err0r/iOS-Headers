//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/NSObject-Protocol.h>

@class UIViewController;
@protocol UIViewControllerPreviewing;

@protocol UIViewControllerPreviewingDelegate <NSObject>
- (void)previewingContext:(id <UIViewControllerPreviewing>)arg1 commitViewController:(UIViewController *)arg2;
- (UIViewController *)previewingContext:(id <UIViewControllerPreviewing>)arg1 viewControllerForLocation:(struct CGPoint)arg2;
@end

