//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/NSObject-Protocol.h>

@class DevicePINController, NSError, NSString, UIViewController;

@protocol DevicePINControllerDelegate <NSObject>

@optional
- (void)showWeakWarningAlertForController:(UIViewController *)arg1 offerUseAnyway:(_Bool)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)devicePINControllerDidDismissPINPane:(DevicePINController *)arg1;
- (void)devicePINController:(DevicePINController *)arg1 didFailToChangePinWithError:(NSError *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didAcceptChangedPIN:(NSString *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didFailToSetPinWithError:(NSError *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 didAcceptSetPIN:(NSString *)arg2;
- (void)devicePINController:(DevicePINController *)arg1 shouldAcceptPIN:(NSString *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)didAcceptSetPIN;
- (void)didAcceptRemovePIN;
- (void)didAcceptChangedPIN;
- (void)didCancelEnteringPIN;
- (void)willCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(NSString *)arg1;
- (void)didAcceptEnteredPIN;
- (void)willAcceptEnteredPIN;
@end

