//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDHealthServiceCharacteristic, HKDevice, NSError;

@interface _HDHealthServiceDataUpdate : NSObject
{
    unsigned long long _sessionIdentifier;
    HDHealthServiceCharacteristic *_characteristic;
    HKDevice *_device;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) HKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) HDHealthServiceCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property(readonly, nonatomic) unsigned long long sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(unsigned long long)arg1 characteristic:(id)arg2 device:(id)arg3 error:(id)arg4;

@end

