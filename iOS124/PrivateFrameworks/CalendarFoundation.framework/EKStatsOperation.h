//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKStatsOperation : NSObject
{
    int _type;
    long long _intValue;
    double _doubleValue;
}

@property double doubleValue; // @synthesize doubleValue=_doubleValue;
@property long long intValue; // @synthesize intValue=_intValue;
@property int type; // @synthesize type=_type;
- (id)initWithType:(int)arg1 doubleValue:(double)arg2;
- (id)initWithType:(int)arg1 intValue:(long long)arg2;

@end

