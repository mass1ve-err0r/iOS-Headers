//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol CKSMSComposeRemoteViewControllerDelegate <NSObject>
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerSendStartedWithText:(NSString *)arg1;
- (void)smsComposeControllerShouldSendMessageWithText:(NSString *)arg1 toRecipients:(NSArray *)arg2 completion:(void (^)(_Bool))arg3;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerDataInserted;
- (void)viewServiceDidTerminateWithError:(NSError *)arg1;
@end

