//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface AMSCardEnrollmentEligibilityTask : AMSTask
{
    NSString *_countryCode;
}

@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;
- (id)_performSilentEnrollmentCheckWithRequest:(id)arg1;
- (unsigned long long)_cardTypeForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)canWriteBillingInfoWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCountryCode:(id)arg1;
- (id)init;

@end

