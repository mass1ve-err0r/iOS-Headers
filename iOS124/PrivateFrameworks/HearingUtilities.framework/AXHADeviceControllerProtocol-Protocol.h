//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingUtilities/NSObject-Protocol.h>

@class NSString;
@protocol AXHADeviceProtocol;

@protocol AXHADeviceControllerProtocol <NSObject>
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(NSString *)arg3;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(NSString *)arg2;
- (void)stopPropertyUpdates;
- (void)registerForPropertyUpdates:(void (^)(NSDictionary *))arg1;
- (void)device:(id <AXHADeviceProtocol>)arg1 didUpdateProperty:(unsigned long long)arg2;
@end

