//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSPerSitePreferenceTimeout : NSObject
{
    double _interval;
    id _fallbackValue;
}

+ (id)timeoutWithInterval:(double)arg1 fallbackValue:(id)arg2;
@property(readonly, nonatomic) id fallbackValue; // @synthesize fallbackValue=_fallbackValue;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (id)initWithInterval:(double)arg1 fallbackValue:(id)arg2;

@end

