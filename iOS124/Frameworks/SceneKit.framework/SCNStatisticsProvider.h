//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNStatisticsProvider : NSObject
{
}

- (id)collectedShadersForPid:(int)arg1;
- (id)performanceStatisticsForPid:(int)arg1;
- (int)stopCollectingPerformanceStatisticsForPid:(int)arg1;
- (int)startCollectingPerformanceStatisticsForPid:(int)arg1;

@end

