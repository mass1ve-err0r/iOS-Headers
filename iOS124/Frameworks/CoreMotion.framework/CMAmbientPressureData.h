//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMAmbientPressureData : CMLogItem
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CDStruct_c3b9c2ee ambientPressure;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPressure:(CDStruct_ebf20f05)arg1 andTimestamp:(double)arg2;

@end

