//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, PKAccountFlowController, UIViewController;

@protocol PKAccountFlowControllerDelegate <NSObject>
- (void)accountFlowController:(PKAccountFlowController *)arg1 requestsPresentationOfDisplayableError:(NSError *)arg2;
- (void)accountFlowController:(PKAccountFlowController *)arg1 requestsPresentationOfViewController:(UIViewController *)arg2;
@end

