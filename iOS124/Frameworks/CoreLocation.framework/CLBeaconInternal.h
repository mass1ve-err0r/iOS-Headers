//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSUUID;

@interface CLBeaconInternal : NSObject
{
    NSUUID *proximityUUID;
    NSNumber *major;
    NSNumber *minor;
    long long proximity;
    double accuracy;
    long long rssi;
}

@end

