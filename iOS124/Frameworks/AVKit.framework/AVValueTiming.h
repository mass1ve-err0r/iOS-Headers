//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/NSCoding-Protocol.h>
#import <AVKit/NSCopying-Protocol.h>
#import <AVKit/NSMutableCopying-Protocol.h>

@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
+ (double)currentTimeStamp;
@property(readonly, nonatomic) double rate;
@property(readonly, nonatomic) double anchorTimeStamp;
@property(readonly, nonatomic) double anchorValue;
- (CDStruct_c3b9c2ee)_timing;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithValueTiming:(id)arg1;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (_Bool)isEqualToValueTiming:(id)arg1;
- (double)timeStampForValue:(double)arg1;
- (double)valueForTimeStamp:(double)arg1;
@property(readonly, nonatomic) double currentValue;

@end

