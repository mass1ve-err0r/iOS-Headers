//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSeriesBuilderServerInterface-Protocol.h>

@class HKWorkout, NSArray, NSDictionary;

@protocol HKWorkoutRouteBuilderServerInterface <HKSeriesBuilderServerInterface>
- (void)remote_finishRouteWithWorkout:(HKWorkout *)arg1 metadata:(NSDictionary *)arg2 completion:(void (^)(HKWorkoutRoute *, NSError *))arg3;
- (void)remote_insertRouteData:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

