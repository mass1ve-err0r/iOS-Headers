//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/NSObject-Protocol.h>

@class NSString, _CDPeriodicSchedulerJob;

@protocol _CDPeriodicScheduler <NSObject>
- (void)unregisterJob:(NSString *)arg1;
- (void)registerJob:(_CDPeriodicSchedulerJob *)arg1;
@end

