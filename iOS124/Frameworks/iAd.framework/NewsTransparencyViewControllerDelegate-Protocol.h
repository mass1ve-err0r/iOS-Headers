//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class NSError, NewsTransparencyViewController;

@protocol NewsTransparencyViewControllerDelegate <NSObject>

@optional
- (void)newsTransparencyViewControllerDidRenderView:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewControllerDidLinkOut:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewController:(NewsTransparencyViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)newsTransparencyViewControllerDidDismiss:(NewsTransparencyViewController *)arg1;
- (void)newsTransparencyViewControllerDidLoad:(NewsTransparencyViewController *)arg1;
@end

