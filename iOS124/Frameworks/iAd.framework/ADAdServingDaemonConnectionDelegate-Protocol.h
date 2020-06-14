//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAd/NSObject-Protocol.h>

@class NSString, NSXPCConnection;

@protocol ADAdServingDaemonConnectionDelegate <NSObject>
- (void)configureConnection:(NSXPCConnection *)arg1;
- (NSString *)adServingDaemonMachServiceName;

@optional
- (void)adServingDaemonConnectionLost;
- (void)adServingDaemonConnectionEstablished;
- (_Bool)shouldConnectToAdServingDaemon;
@end

