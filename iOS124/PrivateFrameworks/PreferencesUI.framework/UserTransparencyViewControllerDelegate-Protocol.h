//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PreferencesUI/NSObject-Protocol.h>

@class NSError, UserTransparencyViewController;

@protocol UserTransparencyViewControllerDelegate <NSObject>

@optional
- (void)userTransparencyViewController:(UserTransparencyViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)userTransparencyViewControllerDidDismiss:(UserTransparencyViewController *)arg1;
- (void)userTransparencyViewControllerDidLoad:(UserTransparencyViewController *)arg1;
@end

