//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class CUTWiFiManager, NSDictionary;

@protocol CUTWiFiManagerDelegate <NSObject>

@optional
- (void)cutWiFiManager:(CUTWiFiManager *)arg1 generatedPowerReading:(NSDictionary *)arg2;
- (void)cutWiFiManagerLinkDidChange:(CUTWiFiManager *)arg1 context:(NSDictionary *)arg2;
- (void)cutWiFiManagerDeviceAttached:(CUTWiFiManager *)arg1;
@end

