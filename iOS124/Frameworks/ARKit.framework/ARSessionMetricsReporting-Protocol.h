//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/NSObject-Protocol.h>

@class NSString;

@protocol ARSessionMetricsReporting <NSObject>
- (void)pushValue:(double)arg1 forDistributionKey:(NSString *)arg2;
- (void)addValue:(long long)arg1 forScalarKey:(NSString *)arg2;
- (void)postDarwinNotification:(NSString *)arg1;
@end

