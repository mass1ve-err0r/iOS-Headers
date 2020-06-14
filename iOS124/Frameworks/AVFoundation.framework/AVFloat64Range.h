//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AVFloat64Range : NSObject <NSCopying>
{
    double _minimum;
    double _maximum;
}

+ (id)float64RangeWithAudioValueRange:(struct AudioValueRange)arg1;
+ (id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2;
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAudioValueRange:(struct AudioValueRange)arg1;
- (id)initWithMinimum:(double)arg1 maximum:(double)arg2;

@end

