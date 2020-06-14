//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/NSObject-Protocol.h>

@class CTSuppServicesNotificationData, CTXPCServiceSubscriptionContext, NSError;

@protocol CoreTelephonyClientSuppServicesDelegate <NSObject>

@optional
- (void)suppServicesError:(CTXPCServiceSubscriptionContext *)arg1 error:(NSError *)arg2;
- (void)suppServicesCompleted:(CTXPCServiceSubscriptionContext *)arg1;
- (void)suppServicesStarted:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneNumberChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneNumberAvailable:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookError:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookWritten:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookFetched:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookSelected:(CTXPCServiceSubscriptionContext *)arg1;
- (void)spcUnlockSuccessful:(CTXPCServiceSubscriptionContext *)arg1;
- (void)suppServicesEvent:(CTXPCServiceSubscriptionContext *)arg1 event:(int)arg2 settingsType:(int)arg3 data:(CTSuppServicesNotificationData *)arg4;
@end

