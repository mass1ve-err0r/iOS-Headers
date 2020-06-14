//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/NSObject-Protocol.h>

@class CTServiceDescriptor, CTXPCServiceSubscriptionContext, NSString;

@protocol CoreTelephonyClientSubscriberDelegate <NSObject>

@optional
- (void)subscriberCountryCodeDidChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)shortLabelsDidChange;
- (void)authTokenChanged:(CTServiceDescriptor *)arg1;
- (void)simPinChangeRequestDidComplete:(CTXPCServiceSubscriptionContext *)arg1 success:(_Bool)arg2;
- (void)simPukEntryErrorDidOccur:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
- (void)simPinEntryErrorDidOccur:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
- (void)simLockSaveRequestDidComplete:(CTXPCServiceSubscriptionContext *)arg1 success:(_Bool)arg2;
- (void)simStatusDidChange:(CTXPCServiceSubscriptionContext *)arg1 status:(NSString *)arg2;
@end

