//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SFWirelessChargingDevice.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class SFPowerSource;

@interface SFWirelessChargingDeviceWatch : SFWirelessChargingDevice <NSSecureCoding>
{
    SFPowerSource *_watchPowerSource;
}

@property(retain, nonatomic) SFPowerSource *watchPowerSource; // @synthesize watchPowerSource=_watchPowerSource;
- (void).cxx_destruct;

@end

