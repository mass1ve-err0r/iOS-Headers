//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKAMPEnrollmentManager, PKPaymentPass;

@protocol PKAMPEnrollmentManagerObserver <NSObject>

@optional
- (void)ampEnrollmentManager:(PKAMPEnrollmentManager *)arg1 didEnrollPaymentPass:(PKPaymentPass *)arg2 success:(_Bool)arg3;
@end

