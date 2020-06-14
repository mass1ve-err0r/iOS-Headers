//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreTelephony/NSObject-Protocol.h>

@class CTDataConnectionStatus, CTDataStatus, CTXPCServiceSubscriptionContext, NSArray;

@protocol CoreTelephonyClientDataDelegate <NSObject>

@optional
- (void)dataStatus:(CTXPCServiceSubscriptionContext *)arg1 dataStatusInfo:(CTDataStatus *)arg2;
- (void)connectionAvailability:(CTXPCServiceSubscriptionContext *)arg1 availableConnections:(NSArray *)arg2;
- (void)servingNetworkChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)currentDataSimChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)preferredDataSimChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)connectionActivationError:(CTXPCServiceSubscriptionContext *)arg1 connection:(int)arg2 error:(int)arg3;
- (void)connectionStateChanged:(CTXPCServiceSubscriptionContext *)arg1 connection:(int)arg2 dataConnectionStatusInfo:(CTDataConnectionStatus *)arg3;
@end

