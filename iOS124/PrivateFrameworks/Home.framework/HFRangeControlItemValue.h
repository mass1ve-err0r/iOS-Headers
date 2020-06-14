//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFNumberRange, NSNumber;

@interface HFRangeControlItemValue : NSObject
{
    unsigned long long _mode;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_targetValue;
}

+ (id)targetValueWithValue:(id)arg1;
+ (id)thresholdValueWithMinimumValue:(id)arg1 maximumValue:(id)arg2;
@property(copy, nonatomic) NSNumber *targetValue; // @synthesize targetValue=_targetValue;
@property(copy, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) HFNumberRange *numberRange;

@end

