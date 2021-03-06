//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessory.h>

#import <CoreHAP/HAPAccessoryServerInternalDelegate-Protocol.h>

@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate>
{
    HAPCharacteristic *_reachabilityCharacteristic;
}

@property(nonatomic) __weak HAPCharacteristic *reachabilityCharacteristic; // @synthesize reachabilityCharacteristic=_reachabilityCharacteristic;
- (void).cxx_destruct;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1;
- (_Bool)mergeObject:(id)arg1;
- (_Bool)shouldMergeObject:(id)arg1;
- (_Bool)mergeWithAccessory:(id)arg1;
- (_Bool)__parseBridgeService:(id)arg1;
- (_Bool)__parseServices;
- (_Bool)__isReachable;
- (void)setReachable:(_Bool)arg1;
- (_Bool)isPrimary;
- (id)shortDescription;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

