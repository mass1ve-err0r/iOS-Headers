//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKPaymentCameraCaptureViewController;

@protocol PKPaymentCameraCaptureViewControllerDelegate <NSObject>
- (void)cameraCaptureViewController:(PKPaymentCameraCaptureViewController *)arg1 didRecognizeObjects:(NSArray *)arg2;
- (void)cameraCaptureViewControllerDidFail:(PKPaymentCameraCaptureViewController *)arg1;
@end

