//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMFoundation/NSObject-Protocol.h>

@class IMPerfProfiler;
@protocol IMPerfProfilerSink;

@protocol IMPerfProfilerBehavior <NSObject>
- (void)perfProfiler:(IMPerfProfiler *)arg1 measurementDidFinish:(struct IMPerfMeasurement_t *)arg2 withSink:(id <IMPerfProfilerSink>)arg3;
@end

