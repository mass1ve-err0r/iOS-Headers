//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NRDevice, NSString;

@protocol NRDevicePropertyObserver <NSObject>
- (void)device:(NRDevice *)arg1 propertyDidChange:(NSString *)arg2 fromValue:(id)arg3;
@end

