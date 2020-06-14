//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChat/BCApplePayManagerProtocol-Protocol.h>

@protocol BCApplePayManagerDelegate;

@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol>
{
    id <BCApplePayManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <BCApplePayManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentApplePay;
- (id)message;
- (long long)applePayStatus;
- (id)initWithMessage:(id)arg1 delegate:(id)arg2;

@end

