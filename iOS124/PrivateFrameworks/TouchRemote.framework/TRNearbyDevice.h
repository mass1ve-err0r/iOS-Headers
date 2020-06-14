//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, SFDevice;

@interface TRNearbyDevice : NSObject
{
    unsigned long long _supportedService;
    SFDevice *_representedDevice;
}

@property(readonly, nonatomic) SFDevice *representedDevice; // @synthesize representedDevice=_representedDevice;
@property(nonatomic) unsigned long long supportedService; // @synthesize supportedService=_supportedService;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithRepresentedDevice:(id)arg1 supportedService:(unsigned long long)arg2;
- (id)init;

@end

