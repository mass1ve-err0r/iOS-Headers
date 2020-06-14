//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface SFWirelessChargingDevice : NSObject <NSSecureCoding>
{
    _Bool _wirelessCharging;
    _Bool _charged;
    _Bool _inBandCommsBasedPowerSources;
    int _type;
    NSString *_uniqueIdentifier;
    NSDate *_startedWirelessCharging;
    NSArray *_powerSources;
    long long _matID;
}

@property(readonly, nonatomic) _Bool inBandCommsBasedPowerSources; // @synthesize inBandCommsBasedPowerSources=_inBandCommsBasedPowerSources;
@property(readonly, nonatomic) long long matID; // @synthesize matID=_matID;
@property(readonly, nonatomic) _Bool charged; // @synthesize charged=_charged;
@property(readonly, nonatomic) _Bool wirelessCharging; // @synthesize wirelessCharging=_wirelessCharging;
@property(readonly, nonatomic) NSArray *powerSources; // @synthesize powerSources=_powerSources;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *startedWirelessCharging; // @synthesize startedWirelessCharging=_startedWirelessCharging;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;

@end

