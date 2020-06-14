//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerCommandEvent : HMDLogEvent <HMDAWDLogEvent>
{
    unsigned long long _commandType;
    HMDHAPAccessory *_accessory;
}

+ (id)commandEventWithCommandType:(unsigned long long)arg1 accessory:(id)arg2;
+ (id)uuid;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
- (void).cxx_destruct;
- (id)initWithCommandType:(unsigned long long)arg1 accessory:(id)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

