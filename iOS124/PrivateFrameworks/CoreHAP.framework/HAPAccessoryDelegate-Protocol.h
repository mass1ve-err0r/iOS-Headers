//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPAccessory;

@protocol HAPAccessoryDelegate <NSObject>

@optional
- (void)accessoryDidBecomeUnreachable:(HAPAccessory *)arg1;
- (void)accessoryDidBecomeReachable:(HAPAccessory *)arg1;
@end

