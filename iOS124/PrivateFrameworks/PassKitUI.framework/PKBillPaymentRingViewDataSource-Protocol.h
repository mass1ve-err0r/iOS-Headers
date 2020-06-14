//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber, NSString, PKBillPaymentRingView, PKBillPaymentSuggestedAmount;

@protocol PKBillPaymentRingViewDataSource <NSObject>
- (NSString *)billPaymentRingViewZeroInterestText:(PKBillPaymentRingView *)arg1;
- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 interestTextForAmount:(NSDecimalNumber *)arg2;
- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 bottomCurvedTextForSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg2;
- (NSString *)billPaymentRingView:(PKBillPaymentRingView *)arg1 topCurvedTextForSuggestedAmount:(PKBillPaymentSuggestedAmount *)arg2;
@end

