//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBAlertWindowViewController;

@protocol SBAlertWindowViewControllerDelegate <NSObject>
- (long long)activeInterfaceOrientationForAlertWindowViewController:(SBAlertWindowViewController *)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForAlertWindowViewController:(SBAlertWindowViewController *)arg1;
- (long long)defaultInterfaceOrientationForPresentationOfAlertWindowViewController:(SBAlertWindowViewController *)arg1;
- (_Bool)defaultShouldAutorotateForAlertWindowViewController:(SBAlertWindowViewController *)arg1;
@end

