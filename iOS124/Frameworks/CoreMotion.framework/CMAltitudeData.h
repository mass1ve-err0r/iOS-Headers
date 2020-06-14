//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@class NSNumber;

@interface CMAltitudeData : CMLogItem
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *pressure;
@property(readonly, nonatomic) NSNumber *relativeAltitude;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 pressure:(float)arg2 relativeAltitude:(float)arg3;
- (id)initWithAltitude:(float)arg1 andTimestamp:(double)arg2 atBaseAltitude:(float)arg3;

@end

