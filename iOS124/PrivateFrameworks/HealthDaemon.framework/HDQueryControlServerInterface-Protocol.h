//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKQueryServerConfiguration, NSString, NSUUID;

@protocol HDQueryControlServerInterface <NSObject>
- (void)remote_createQueryServerForIdentifier:(NSString *)arg1 queryUUID:(NSUUID *)arg2 configuration:(HKQueryServerConfiguration *)arg3 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg4;
@end

