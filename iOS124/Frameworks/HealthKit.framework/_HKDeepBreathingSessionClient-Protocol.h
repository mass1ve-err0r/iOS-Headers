//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSError;

@protocol _HKDeepBreathingSessionClient <NSObject>
- (void)sessionDidReceiveHeartRate:(double)arg1;
- (void)sessionDidReceiveError:(NSError *)arg1;
@end

