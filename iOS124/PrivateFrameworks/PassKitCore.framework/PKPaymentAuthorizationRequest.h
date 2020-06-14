//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject
{
    NSData *_credential;
    NSData *_nonceData;
    PKPaymentRequest *_paymentRequest;
}

@property(readonly, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(retain, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (id)initWithPaymentRequest:(id)arg1;

@end

