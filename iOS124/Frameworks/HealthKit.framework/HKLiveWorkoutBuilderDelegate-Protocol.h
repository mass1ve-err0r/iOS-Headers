//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKLiveWorkoutBuilder, NSSet;

@protocol HKLiveWorkoutBuilderDelegate <NSObject>
- (void)workoutBuilderDidCollectEvent:(HKLiveWorkoutBuilder *)arg1;
- (void)workoutBuilder:(HKLiveWorkoutBuilder *)arg1 didCollectDataOfTypes:(NSSet *)arg2;
@end

