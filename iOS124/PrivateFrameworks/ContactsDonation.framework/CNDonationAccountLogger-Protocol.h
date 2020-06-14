//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/NSObject-Protocol.h>

@class ACAccount, CNDonationValue, NSError, NSString;

@protocol CNDonationAccountLogger <NSObject>
- (void)removalFailedWithError:(NSError *)arg1;
- (void)donationFailedWithError:(NSError *)arg1;
- (void)removing:(NSString *)arg1;
- (void)donating:(CNDonationValue *)arg1;
- (void)accountsDidNotChange;
- (void)accountRemoved:(ACAccount *)arg1;
- (void)accountChanged:(ACAccount *)arg1;
- (void)accountAdded:(ACAccount *)arg1;
- (void)pluginUnloaded;
- (void)pluginLoaded;
@end

