//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, CBPeripheral, NSData, NSNumber, NSString;

@protocol CBCentralManagerPrivateDelegate <CBCentralManagerDelegate>

@optional
- (void)centralManager:(CBCentralManager *)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(CBPeripheral *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 application:(NSString *)arg2 isActive:(_Bool)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didUpdateConnectionParameters:(CBPeripheral *)arg2 interval:(NSNumber *)arg3 latency:(NSNumber *)arg4 supervisionTimeout:(NSNumber *)arg5;
- (void)centralManager:(CBCentralManager *)arg1 didLoseZone:(NSData *)arg2 mask:(NSData *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didLosePeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didFindPeripheral:(CBPeripheral *)arg2 forType:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg1 didUpdatePeripheralConnectionState:(CBPeripheral *)arg2;
@end

