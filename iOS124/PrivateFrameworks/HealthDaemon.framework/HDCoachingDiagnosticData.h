//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKCategorySample, NSArray;

@interface HDCoachingDiagnosticData : NSObject
{
    NSArray *_items;
    HKCategorySample *_coachingEventSample;
}

@property(retain, nonatomic) HKCategorySample *coachingEventSample; // @synthesize coachingEventSample=_coachingEventSample;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)itemForInterval:(unsigned long long)arg1 future:(_Bool)arg2;
- (id)init;

@end

